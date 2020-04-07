//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface AWEDataFreeStatusResponseModel : MTLModel <MTLJSONSerializing>
{
    _Bool _isOrderFlow;
    NSNumber *_statusCode;
    NSString *_prompt;
    NSNumber *_flow;
    NSNumber *_threshold;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) NSNumber *flow; // @synthesize flow=_flow;
@property(nonatomic) _Bool isOrderFlow; // @synthesize isOrderFlow=_isOrderFlow;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSNumber *statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
