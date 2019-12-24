//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWEGeneralPopupButtonModel : MTLModel <MTLJSONSerializing>
{
    NSString *_title;
    long long _style;
    long long _actionType;
    NSString *_actionTarget;
}

+ (id)actionTypeJSONTransformer;
+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) NSString *actionTarget; // @synthesize actionTarget=_actionTarget;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
