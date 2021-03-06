//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "IESVideoBSGroupModelProtocol-Protocol.h"
#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface IESVideoBSGroupModel : MTLModel <MTLJSONSerializing, IESVideoBSGroupModelProtocol>
{
    NSArray *_configArray;
    NSString *_defaultConfig;
    NSArray *_bitrateRange;
    NSNumber *_defaultBitrate;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *defaultBitrate; // @synthesize defaultBitrate=_defaultBitrate;
@property(copy, nonatomic) NSArray *bitrateRange; // @synthesize bitrateRange=_bitrateRange;
@property(retain, nonatomic) NSString *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
@property(copy, nonatomic) NSArray *configArray; // @synthesize configArray=_configArray;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

