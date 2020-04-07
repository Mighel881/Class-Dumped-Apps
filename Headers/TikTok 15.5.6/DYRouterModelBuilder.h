//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYASecurityTicketModel, DYPhoneNumberModel, NSString;

@interface DYRouterModelBuilder : NSObject
{
    _Bool _shouldHideFAQButton;
    unsigned long long _backStrategy;
    DYPhoneNumberModel *_phoneContext;
    DYPhoneNumberModel *_oldPhoneContext;
    NSString *_emailContext;
    NSString *_passwordContext;
    unsigned long long _platformContext;
    unsigned long long _bindStrategy;
    DYASecurityTicketModel *_ticketModel;
}

+ (id)instanceWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool shouldHideFAQButton; // @synthesize shouldHideFAQButton=_shouldHideFAQButton;
@property(retain, nonatomic) DYASecurityTicketModel *ticketModel; // @synthesize ticketModel=_ticketModel;
@property(nonatomic) unsigned long long bindStrategy; // @synthesize bindStrategy=_bindStrategy;
@property(nonatomic) unsigned long long platformContext; // @synthesize platformContext=_platformContext;
@property(retain, nonatomic) NSString *passwordContext; // @synthesize passwordContext=_passwordContext;
@property(retain, nonatomic) NSString *emailContext; // @synthesize emailContext=_emailContext;
@property(retain, nonatomic) DYPhoneNumberModel *oldPhoneContext; // @synthesize oldPhoneContext=_oldPhoneContext;
@property(retain, nonatomic) DYPhoneNumberModel *phoneContext; // @synthesize phoneContext=_phoneContext;
@property(nonatomic) unsigned long long backStrategy; // @synthesize backStrategy=_backStrategy;
- (void).cxx_destruct;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
