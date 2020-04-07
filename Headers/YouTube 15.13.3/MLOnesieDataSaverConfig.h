//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, MLDataSaverBitrateCap, NSHashTable;

@interface MLOnesieDataSaverConfig : NSObject
{
    NSHashTable *_observers;
    MLDataSaverBitrateCap *_dataSaverBitrateCap;
    _Bool _enabled;
    GIMMe *_gimme;
}

@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)addDataSaverConfigObserver:(id)arg1;
- (void)updateWithDataSaverConfig:(id)arg1;
@property(readonly, nonatomic) long long bitrateCap;

@end
