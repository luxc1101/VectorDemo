#ifndef BITRATEBOX_H
#define BITRATEBOX_H

#include <QComboBox>

/*The QIntValidator class provides a validator which ensures
that a string contains a valid integer within a specified range.
the validate() func return Acceptable, Intermediate oder Invalid

Acceptable: measn that the string is a valid int within the specified range;
Intermediate: means that the string is a valid int but is not within the specified range;
Invalid: means that the string is not a valid int;
*/

QT_BEGIN_NAMESPACE
class QIntValidator;
QT_END_NAMESPACE

class BitRateBox : public QComboBox
{
public:
    explicit BitRateBox(QWidget *parent = nullptr);
    ~BitRateBox();

    int bitRate() const;

    bool isFlexibleDataRateEnabled() const;
    void setFlexibleDataRateEnabled(bool enabled);

private slots:
    void checkCustomSpeedPolicy(int idx);

private:
    void fillBitRates();

    int m_isFlexibleDataRateEnabled = false;
    QIntValidator *m_customSpeedValidator = nullptr;
};

#endif // BITRATEBOX_H
