//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESReverbModel : NSObject
{
    double _dryWetMix;
    double _gain;
    double _minDelayTime;
    double _maxDelayTime;
    double _decayTimeAt0Hz;
    double _decayTimeAtNyquist;
    double _randomizeReflections;
    double _filterFrequency;
    double _filterBandwidth;
    double _filterGain;
}

@property(nonatomic) double filterGain; // @synthesize filterGain=_filterGain;
@property(nonatomic) double filterBandwidth; // @synthesize filterBandwidth=_filterBandwidth;
@property(nonatomic) double filterFrequency; // @synthesize filterFrequency=_filterFrequency;
@property(nonatomic) double randomizeReflections; // @synthesize randomizeReflections=_randomizeReflections;
@property(nonatomic) double decayTimeAtNyquist; // @synthesize decayTimeAtNyquist=_decayTimeAtNyquist;
@property(nonatomic) double decayTimeAt0Hz; // @synthesize decayTimeAt0Hz=_decayTimeAt0Hz;
@property(nonatomic) double maxDelayTime; // @synthesize maxDelayTime=_maxDelayTime;
@property(nonatomic) double minDelayTime; // @synthesize minDelayTime=_minDelayTime;
@property(nonatomic) double gain; // @synthesize gain=_gain;
@property(nonatomic) double dryWetMix; // @synthesize dryWetMix=_dryWetMix;

@end
