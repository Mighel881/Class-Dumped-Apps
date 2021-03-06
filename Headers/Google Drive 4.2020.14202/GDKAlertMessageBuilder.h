//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

@interface GDKAlertMessageBuilder : NSObject
{
    _Bool _allowDismissal;
    NSString *_title;
    UIColor *_titleColor;
    NSString *_message;
    NSArray *_actions;
    CDUnknownBlockType _dismissCompletion;
}

+ (id)builderFromExistingMessage:(id)arg1;
+ (id)builderWithMessage:(id)arg1;
@property(nonatomic) _Bool allowDismissal; // @synthesize allowDismissal=_allowDismissal;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletion; // @synthesize dismissCompletion=_dismissCompletion;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (id)build;
- (id)initWithMessage:(id)arg1;

@end

