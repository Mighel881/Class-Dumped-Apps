//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface IESLiveCoverImageQualityModel : MTLModel <MTLJSONSerializing>
{
    long long _level;
    NSString *_indicatorTip;
    NSString *_alertTip;
    NSString *_uri;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSString *alertTip; // @synthesize alertTip=_alertTip;
@property(retain, nonatomic) NSString *indicatorTip; // @synthesize indicatorTip=_indicatorTip;
@property(nonatomic) long long level; // @synthesize level=_level;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
