//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOIModalView.h>

@class GOILogger, NSString;

@interface GOIErrorView : GOIModalView
{
    NSString *_message;
    CDUnknownBlockType _completion;
    id _retainedSelf;
    GOILogger *_logger;
}

+ (void)showError:(id)arg1 UIDelegate:(id)arg2 logger:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)closeDialog;
- (void)positionOnScreen;
- (id)initWithMessage:(id)arg1 logger:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
