package com.zeroone.star.oauth2.service.impl;

import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl;
import com.zeroone.star.oauth2.entity.Role;
import com.zeroone.star.oauth2.entity.RoleDO;
import com.zeroone.star.oauth2.mapper.RoleMapper;
import com.zeroone.star.oauth2.service.IRoleService;
import org.springframework.stereotype.Service;

import java.util.List;

/**
 * <p>
 * 角色表 服务实现类
 * </p>
 *
 * @author 阿伟
 */
@Service
public class RoleServiceImpl extends ServiceImpl<RoleMapper, RoleDO> implements IRoleService {

    @Override
    public List<RoleDO> listRoleByUserId(Long userId) {
        return baseMapper.selectByUserId(userId);
    }

    @Override
    public List<RoleDO> listRoleByMenuPath(String path) {
        return baseMapper.selectByMenuPath(path);
    }
}
