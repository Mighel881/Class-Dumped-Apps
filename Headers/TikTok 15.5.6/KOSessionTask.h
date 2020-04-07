//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLRequest, NSURLSessionTask;

@interface KOSessionTask : NSObject
{
    NSURLSessionTask *_task;
    NSURLRequest *_request;
    CDUnknownBlockType _completionHandler;
}

+ (double)requestTimeoutInterval;
+ (void)setRequestTimeoutInterval:(double)arg1;
+ (id)logoutWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)taskWithURL:(id)arg1 headers:(id)arg2 parameters:(id)arg3 httpMethod:(long long)arg4 multipartFormData:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)taskWithURL:(id)arg1 parameters:(id)arg2 httpMethod:(long long)arg3 multipartFormData:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)taskWithPath:(id)arg1 version:(unsigned long long)arg2 headers:(id)arg3 parameters:(id)arg4 httpMethod:(long long)arg5 multipartFormData:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (id)taskWithPath:(id)arg1 headers:(id)arg2 parameters:(id)arg3 httpMethod:(long long)arg4 multipartFormData:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)taskWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(long long)arg3 multipartFormData:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)getPushTokenInfoFromDictionary:(id)arg1;
+ (id)pushGetTokensTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)pushSendMsg:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)pushDeregisterAllDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)pushDeregisterDeviceWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)pushRegisterDeviceWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)deviceTokenStringWithData:(id)arg1;
+ (id)parseFriends:(id)arg1 context:(id)arg2;
+ (id)friendsWithOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)friendsWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)unlinkTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)signupTaskWithProperties:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)profileUpdateTaskWithProperties:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)meTaskWithSecureResource:(_Bool)arg1 propertyKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)meTaskWithPropertyKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)meTaskWithSecureResource:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)meTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)ageAuthTaskWithCompletionHandler:(long long)arg1 propertyKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)ageAuthTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)accessTokenInfoTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)getLinkInfoFromDictionary:(id)arg1;
+ (long long)emotionWithString:(id)arg1;
+ (long long)permissionWithString:(id)arg1;
+ (long long)mediaTypeWithString:(id)arg1;
+ (id)getStoryActorInfoFromDictionary:(id)arg1;
+ (id)getStoryLikeInfoFromDictionary:(id)arg1;
+ (id)getStoryCommentInfoFromDictionary:(id)arg1;
+ (id)getMyStoryImageInfoFromDictionary:(id)arg1;
+ (id)getMyStoryInfoFromDictionary:(id)arg1;
+ (long long)enumForStoryProfileBirthdayType:(id)arg1;
+ (id)stringForStoryPostPermission:(long long)arg1;
+ (id)buildQueryStringWithParamDictionary:(id)arg1;
+ (id)getStoryPostInfoFromDictionary:(id)arg1;
+ (id)storyDeleteMyStoryTaskWithMyStoryId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)storyIsStoryUserTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)storyMultiImagesUploadTaskWithImages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)storyPostLinkTaskWithLinkInfo:(id)arg1 content:(id)arg2 permission:(long long)arg3 sharable:(_Bool)arg4 androidMarketParamString:(id)arg5 iosMarketParamString:(id)arg6 androidExecParamString:(id)arg7 iosExecParamString:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (id)storyPostLinkTaskWithLinkInfo:(id)arg1 content:(id)arg2 permission:(long long)arg3 sharable:(_Bool)arg4 androidMarketParam:(id)arg5 iosMarketParam:(id)arg6 androidExecParam:(id)arg7 iosExecParam:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (id)storyPostLinkTaskWithLinkInfo:(id)arg1 content:(id)arg2 permission:(long long)arg3 sharable:(_Bool)arg4 androidExecParamString:(id)arg5 iosExecParamString:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (id)storyPostLinkTaskWithLinkInfo:(id)arg1 content:(id)arg2 permission:(long long)arg3 sharable:(_Bool)arg4 androidExecParam:(id)arg5 iosExecParam:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (id)storyPostPhotoTaskWithImageUrls:(id)arg1 content:(id)arg2 permission:(long long)arg3 sharable:(_Bool)arg4 androidMarketParamString:(id)arg5 iosMarketParamString:(id)arg6 androidExecParamString:(id)arg7 iosExecParamString:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (id)storyPostPhotoTaskWithImageUrls:(id)arg1 content:(id)arg2 permission:(long long)arg3 sharable:(_Bool)arg4 androidMarketParam:(id)arg5 iosMarketParam:(id)arg6 androidExecParam:(id)arg7 iosExecParam:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
+ (id)storyPostPhotoTaskWithImageUrls:(id)arg1 content:(id)arg2 permission:(long long)arg3 sharable:(_Bool)arg4 androidExecParamString:(id)arg5 iosExecParamString:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (id)storyPostPhotoTaskWithImageUrls:(id)arg1 content:(id)arg2 permission:(long long)arg3 sharable:(_Bool)arg4 androidExecParam:(id)arg5 iosExecParam:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (id)storyPostNoteTaskWithContent:(id)arg1 permission:(long long)arg2 sharable:(_Bool)arg3 androidMarketParamString:(id)arg4 iosMarketParamString:(id)arg5 androidExecParamString:(id)arg6 iosExecParamString:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (id)storyPostNoteTaskWithContent:(id)arg1 permission:(long long)arg2 sharable:(_Bool)arg3 androidMarketParam:(id)arg4 iosMarketParam:(id)arg5 androidExecParam:(id)arg6 iosExecParam:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (id)storyPostNoteTaskWithContent:(id)arg1 permission:(long long)arg2 sharable:(_Bool)arg3 androidExecParamString:(id)arg4 iosExecParamString:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)storyPostNoteTaskWithContent:(id)arg1 permission:(long long)arg2 sharable:(_Bool)arg3 androidExecParam:(id)arg4 iosExecParam:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)storyGetLinkInfoTaskWithUrl:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)storyGetMyStoriesTaskWithLastMyStoryId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)storyGetMyStoryTaskWithMyStoryId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)storyPostTaskWithContent:(id)arg1 permission:(long long)arg2 imageUrl:(id)arg3 androidExecParamString:(id)arg4 iosExecParamString:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)storyPostTaskWithContent:(id)arg1 permission:(long long)arg2 imageUrl:(id)arg3 androidExecParam:(id)arg4 iosExecParam:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)storyImageUploadTaskWithImageData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)storyImageUploadTaskWithImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)storyProfileTaskWithSecureResource:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)storyProfileTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)storageImageUploadTaskWithImage:(id)arg1 secureResource:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)parseChats:(id)arg1 context:(id)arg2;
+ (id)talkSendMemoV2TaskWithTemplateID:(id)arg1 messageArguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)talkSendMessageTaskWithTemplateID:(id)arg1 receiverID:(id)arg2 receiverType:(long long)arg3 messageArguments:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)talkSendMemoTaskWithTemplateID:(id)arg1 messageArguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)talkSendMessageTaskWithTemplateID:(id)arg1 receiverChat:(id)arg2 messageArguments:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)talkSendMessageTaskWithTemplateID:(id)arg1 receiverUser:(id)arg2 messageArguments:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)talkChatListTaskWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)talkProfileTaskWithSecureResource:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)talkProfileTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)talkMemoSendTaskWithTemplateId:(id)arg1 templateArgs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)talkMessageSendTaskWithTemplateId:(id)arg1 templateArgs:(id)arg2 receiverType:(long long)arg3 receiverId:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)callAPI:(_Bool)arg1;
- (void)resume;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (id)initWithURL:(id)arg1 headers:(id)arg2 parameters:(id)arg3 httpMethod:(long long)arg4 multipartFormData:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 httpMethod:(long long)arg3 multipartFormData:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithPath:(id)arg1 version:(unsigned long long)arg2 headers:(id)arg3 parameters:(id)arg4 httpMethod:(long long)arg5 multipartFormData:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)initWithPath:(id)arg1 headers:(id)arg2 parameters:(id)arg3 httpMethod:(long long)arg4 multipartFormData:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)initWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(long long)arg3 multipartFormData:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
