//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ACCDuetLayoutManager, IESMMCamera, NSString;
@protocol AWEVideoRecoderProtocol><ACCApplyBeautyProtocol;

@protocol ACCDuetLayoutManagerDelegate <NSObject>
- (void)duetLayoutManager:(ACCDuetLayoutManager *)arg1 loadEffectsFinished:(_Bool)arg2;
- (void)duetLayoutManager:(ACCDuetLayoutManager *)arg1 didApplyDuetLayout:(NSString *)arg2;
- (void)succeedDownloadFirstLayoutResource;
- (IESMMCamera<AWEVideoRecoderProtocol><ACCApplyBeautyProtocol> *)camera;
@end
