//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSMutableArray, NSString, PTVActionSheetAction;

@interface PTVActionSheetPage : NSObject
{
    NSMutableArray *_mutableActions;
    NSAttributedString *_messageAttributedString;
    NSString *_messageString;
    PTVActionSheetAction *_dismissAction;
}

@property(readonly, nonatomic) PTVActionSheetAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(copy, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(copy, nonatomic) NSAttributedString *messageAttributedString; // @synthesize messageAttributedString=_messageAttributedString;
- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (void)addActionWithAttributedTitle:(id)arg1 type:(long long)arg2 selectionBlock:(CDUnknownBlockType)arg3 shouldAutoDismiss:(_Bool)arg4;
@property(readonly, copy, nonatomic) NSArray *buttonActions;
- (id)init;

@end
