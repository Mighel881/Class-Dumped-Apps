//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface PTVChatAlertTableViewCellContentView : UIView
{
    UILabel *_alertLabel;
    UIImageView *_superfanIcon;
    _Bool _renderNewUserWelcomeMessage;
    long long _participantIndex;
    _Bool _isAggregated;
    _Bool _isSuperFan;
    _Bool _isModerator;
    _Bool _isNewUser;
    _Bool _useLargeChatFont;
    NSString *_username;
    NSString *_displayName;
    NSString *_message;
}

@property(nonatomic) _Bool useLargeChatFont; // @synthesize useLargeChatFont=_useLargeChatFont;
@property(readonly, nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(readonly, nonatomic) _Bool isModerator; // @synthesize isModerator=_isModerator;
@property(readonly, nonatomic) _Bool isSuperFan; // @synthesize isSuperFan=_isSuperFan;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)backgroundColorState;
- (void)setUsername:(id)arg1 displayName:(id)arg2 isAggregated:(_Bool)arg3 message:(id)arg4 isSuperFan:(_Bool)arg5 isModerator:(_Bool)arg6 renderNewUserWelcomeMessage:(_Bool)arg7 participantIndex:(long long)arg8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

