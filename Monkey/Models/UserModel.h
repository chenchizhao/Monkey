//
//  UserModel.h
//  GitHubYi
//
//  Created by coderyi on 15/3/22.
//  Copyright (c) 2015年 www.coderyi.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserModel : NSObject

@property double myID;
@property int rank;
@property NSString *categoryLocation;
@property NSString *categoryLanguage;
@property(nonatomic,strong)NSString *login;
@property int userId;
@property(nonatomic,strong)NSString *avatar_url;
@property(nonatomic,strong)NSString *gravatar_id;
@property(nonatomic,strong)NSString *url;
@property(nonatomic,strong)NSString *html_url;
@property(nonatomic,strong)NSString *followers_url;
@property(nonatomic,strong)NSString *following_url;
@property(nonatomic,strong)NSString *gists_url;
@property(nonatomic,strong)NSString *starred_url;
@property(nonatomic,strong)NSString *subscriptions_url;
@property(nonatomic,strong)NSString *organizations_url;
@property(nonatomic,strong)NSString *repos_url;
@property(nonatomic,strong)NSString *events_url;
@property(nonatomic,strong)NSString *received_events_url;
@property(nonatomic,strong)NSString *type;
@property BOOL site_admin;
@property(nonatomic,strong)NSString *score;

//detail part
@property(nonatomic,strong)NSString *name;
@property(nonatomic,strong)NSString *company;
@property(nonatomic,strong)NSString *blog;
@property(nonatomic,strong)NSString *location;
@property(nonatomic,strong)NSString *email;
@property int public_repos;
@property int followers;
@property int following;
@property(nonatomic,strong)NSString *created_at;


+(UserModel *)modelWithDict:(NSDictionary *)dict;
@end
