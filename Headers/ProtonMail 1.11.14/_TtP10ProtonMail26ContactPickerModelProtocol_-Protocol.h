//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIImage;
@protocol _TtP10ProtonMail26ContactPickerModelProtocol_;

@protocol _TtP10ProtonMail26ContactPickerModelProtocol_
- (_Bool)equals:(id <_TtP10ProtonMail26ContactPickerModelProtocol_>)arg1;
- (void)lockCheckWithProgress:(void (^)(void))arg1 complete:(void (^)(UIImage *, long long))arg2;
- (void)setTypeWithType:(long long)arg1;
- (NSString *)notesWithType:(long long)arg1;
@property(nonatomic, readonly) _Bool hasNonePM;
@property(nonatomic, readonly) _Bool hasPGPPined;
@property(nonatomic, readonly) UIImage *lock;
@property(nonatomic, readonly) NSString *color;
@property(nonatomic, readonly) UIImage *contactImage;
@property(nonatomic, readonly) NSString *contactSubtitle;
@property(nonatomic, readonly) NSString *displayEmail;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) NSString *contactTitle;
@property(nonatomic, readonly) long long modelType;
@end

