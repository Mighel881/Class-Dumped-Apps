//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSString;

@interface AWEPersonalizedAdPopUpModel : AWEBaseApiModel
{
    NSString *_title;
    NSString *_subtext;
    NSArray *_policies;
    NSArray *_policyLinks;
    NSString *_confirm;
    NSString *_checkSettings;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *checkSettings; // @synthesize checkSettings=_checkSettings;
@property(copy, nonatomic) NSString *confirm; // @synthesize confirm=_confirm;
@property(copy, nonatomic) NSArray *policyLinks; // @synthesize policyLinks=_policyLinks;
@property(copy, nonatomic) NSArray *policies; // @synthesize policies=_policies;
@property(copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

