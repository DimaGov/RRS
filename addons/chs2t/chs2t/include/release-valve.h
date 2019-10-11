#ifndef RELEASEVALVE_H
#define RELEASEVALVE_H

#include    "device.h"

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
class ReleaseValve : public Device
{
public:

    ///Конструктор
    ReleaseValve(QObject *parent = Q_NULLPTR);

    ///Деструктор
    ~ReleaseValve();

    void setPy(double value) { Py = value; }

    double getQrv() const { return  Qrv; }

private:

    double Py;
    double Qrv;

    bool release;

    double K1;

    void load_config(CfgReader &cfg);

    void preStep(state_vector_t &Y, double t);
};

#endif // RELEASEVALVE_H
