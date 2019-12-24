//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveImage, NSNumber, NSString;

@interface HTSLiveGradeIconModel : MTLModel <MTLJSONSerializing>
{
    NSString *_levelStr;
    NSNumber *_iconDiamond;
    IESLiveImage *_icon;
    NSNumber *_level;
}

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) IESLiveImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSNumber *iconDiamond; // @synthesize iconDiamond=_iconDiamond;
@property(copy, nonatomic) NSString *levelStr; // @synthesize levelStr=_levelStr;
- (void).cxx_destruct;
- (id)mapToPbModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
