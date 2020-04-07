//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface IESLiveImageContent : MTLModel <MTLJSONSerializing>
{
    NSString *_name;
    NSString *_fontColor;
    NSNumber *_level;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
