//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, VEAlgorithmPreConfig, VEEffectAlgorithmParam;

@protocol IVEAlgorithmPublicProtocol <NSObject>
- (void)setAlgorithmReplayMmode:(long long)arg1 filePath:(NSString *)arg2;
- (void)setAlgorithmResultsRequirement:(unsigned long long)arg1 callback:(void (^)(struct NSDictionary *))arg2;
- (void)setAlgorithmRequirement:(unsigned long long)arg1 algorithmParam:(unsigned long long)arg2 enableDetect:(_Bool)arg3;
- (void)setAlgorithmExtraParam:(VEEffectAlgorithmParam *)arg1;
- (void)setAlgorithmPreConfig:(VEAlgorithmPreConfig *)arg1;
@end
