//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWELocationDisplayTextGenerator, AWEUserAvatarDecotationModel, NSArray, NSDate, NSString, UIImage;

@interface AWEProfileEditViewModel : NSObject
{
    _Bool _ifDefaultID;
    _Bool _hideLocation;
    _Bool _useDefaultAvatar;
    _Bool _useDefaultNickname;
    float _completionPercent;
    NSString *_userID;
    UIImage *_avatarImage;
    NSArray *_avatarURL;
    UIImage *_videoIconImage;
    NSArray *_videoIconURL;
    NSArray *_videoMp4IconURL;
    NSString *_nickname;
    NSString *_alias;
    NSString *_uniqueID;
    NSDate *_uniqueIdModifyTime;
    NSString *_gender;
    unsigned long long _showGenderStrategy;
    NSString *_birthDate;
    NSString *_signature;
    NSString *_avatarURI;
    NSString *_videoIconURI;
    long long _genderType;
    NSString *_countryCode;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSString *_locationDisplayText;
    NSString *_schoolName;
    NSString *_schoolPoiId;
    NSString *_collegeName;
    NSString *_enrollYear;
    unsigned long long _educationType;
    unsigned long long _schoolVisibleType;
    NSString *_twitterNameToShow;
    NSString *_insId;
    NSString *_youtubeChannelTitle;
    NSString *_youtubeChannelId;
    NSString *_googleAccount;
    NSString *_youtubeRefreshToken;
    AWEUserAvatarDecotationModel *_decorationModel;
    NSString *_bioUrl;
    NSString *_bioEmail;
    long long _birthdayHideLevel;
    AWELocationDisplayTextGenerator *_locationDisplayTextGenerator;
}

@property(retain, nonatomic) AWELocationDisplayTextGenerator *locationDisplayTextGenerator; // @synthesize locationDisplayTextGenerator=_locationDisplayTextGenerator;
@property(nonatomic) float completionPercent; // @synthesize completionPercent=_completionPercent;
@property(nonatomic) _Bool useDefaultNickname; // @synthesize useDefaultNickname=_useDefaultNickname;
@property(nonatomic) _Bool useDefaultAvatar; // @synthesize useDefaultAvatar=_useDefaultAvatar;
@property(nonatomic) long long birthdayHideLevel; // @synthesize birthdayHideLevel=_birthdayHideLevel;
@property(copy, nonatomic) NSString *bioEmail; // @synthesize bioEmail=_bioEmail;
@property(copy, nonatomic) NSString *bioUrl; // @synthesize bioUrl=_bioUrl;
@property(nonatomic) _Bool hideLocation; // @synthesize hideLocation=_hideLocation;
@property(retain, nonatomic) AWEUserAvatarDecotationModel *decorationModel; // @synthesize decorationModel=_decorationModel;
@property(copy, nonatomic) NSString *youtubeRefreshToken; // @synthesize youtubeRefreshToken=_youtubeRefreshToken;
@property(copy, nonatomic) NSString *googleAccount; // @synthesize googleAccount=_googleAccount;
@property(copy, nonatomic) NSString *youtubeChannelId; // @synthesize youtubeChannelId=_youtubeChannelId;
@property(copy, nonatomic) NSString *youtubeChannelTitle; // @synthesize youtubeChannelTitle=_youtubeChannelTitle;
@property(copy, nonatomic) NSString *insId; // @synthesize insId=_insId;
@property(copy, nonatomic) NSString *twitterNameToShow; // @synthesize twitterNameToShow=_twitterNameToShow;
@property(nonatomic) unsigned long long schoolVisibleType; // @synthesize schoolVisibleType=_schoolVisibleType;
@property(nonatomic) unsigned long long educationType; // @synthesize educationType=_educationType;
@property(copy, nonatomic) NSString *enrollYear; // @synthesize enrollYear=_enrollYear;
@property(copy, nonatomic) NSString *collegeName; // @synthesize collegeName=_collegeName;
@property(copy, nonatomic) NSString *schoolPoiId; // @synthesize schoolPoiId=_schoolPoiId;
@property(copy, nonatomic) NSString *schoolName; // @synthesize schoolName=_schoolName;
@property(retain, nonatomic) NSString *locationDisplayText; // @synthesize locationDisplayText=_locationDisplayText;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool ifDefaultID; // @synthesize ifDefaultID=_ifDefaultID;
@property(nonatomic) long long genderType; // @synthesize genderType=_genderType;
@property(retain, nonatomic) NSString *videoIconURI; // @synthesize videoIconURI=_videoIconURI;
@property(retain, nonatomic) NSString *avatarURI; // @synthesize avatarURI=_avatarURI;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *birthDate; // @synthesize birthDate=_birthDate;
@property(nonatomic) unsigned long long showGenderStrategy; // @synthesize showGenderStrategy=_showGenderStrategy;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSDate *uniqueIdModifyTime; // @synthesize uniqueIdModifyTime=_uniqueIdModifyTime;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSArray *videoMp4IconURL; // @synthesize videoMp4IconURL=_videoMp4IconURL;
@property(retain, nonatomic) NSArray *videoIconURL; // @synthesize videoIconURL=_videoIconURL;
@property(retain, nonatomic) UIImage *videoIconImage; // @synthesize videoIconImage=_videoIconImage;
@property(retain, nonatomic) NSArray *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (_Bool)userHaveVideoIcon;
- (_Bool)userHaveAvatar;
- (void)refreshLocationDisplayText;
- (void)refreshWithUser:(id)arg1;

@end
