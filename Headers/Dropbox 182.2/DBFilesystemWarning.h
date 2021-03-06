//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DBFilesystemWarning : NSObject
{
    _Bool _blocking;
    NSString *_identifier;
    NSString *_title;
    NSString *_text;
    NSString *_learnMore;
}

@property(readonly, nonatomic) NSString *learnMore; // @synthesize learnMore=_learnMore;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool blocking; // @synthesize blocking=_blocking;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithId:(id)arg1 blocking:(_Bool)arg2 title:(id)arg3 text:(id)arg4 learnMore:(id)arg5;
- (void)showWarningWithConfirm:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2 cancelTitle:(id)arg3 modalManager:(id)arg4;
@property(readonly, nonatomic) NSURL *localizedLearnMore;

@end

