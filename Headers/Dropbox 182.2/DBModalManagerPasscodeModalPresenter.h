//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBPasscodeModalPresenter-Protocol.h>

@protocol DBModalManaging;

@interface DBModalManagerPasscodeModalPresenter : NSObject <DBPasscodeModalPresenter>
{
    id <DBModalManaging> _modalManager;
}

@property(retain, nonatomic) id <DBModalManaging> modalManager; // @synthesize modalManager=_modalManager;
- (void).cxx_destruct;
- (void)presentPasscodeModalTakeover:(id)arg1 animated:(_Bool)arg2 presentationCompletion:(CDUnknownBlockType)arg3 dismissalBlock:(CDUnknownBlockType)arg4;
- (void)presentPasscodeModal:(id)arg1 animated:(_Bool)arg2 dismissalBlock:(CDUnknownBlockType)arg3;
- (void)dismissPasscodeModal:(id)arg1 animated:(_Bool)arg2;
- (id)initWithModalManager:(id)arg1;

@end
