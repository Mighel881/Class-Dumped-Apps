//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TFNButton;
@protocol TFNBinaryChoiceDelegate;

@interface TFNBinaryChoiceControl : UIView
{
    id <TFNBinaryChoiceDelegate> _delegate;
    NSString *_username;
    TFNButton *_acceptButton;
    TFNButton *_declineButton;
}

+ (struct CGSize)sizeForControl;
+ (id)_declineButtonImageName;
+ (id)_acceptButtonImageName;
@property(retain, nonatomic) TFNButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) TFNButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <TFNBinaryChoiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_declineButtonTapped:(id)arg1 event:(id)arg2;
- (void)_acceptButtonTapped:(id)arg1 event:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
