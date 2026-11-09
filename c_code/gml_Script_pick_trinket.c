// gml_Script_pick_trinket @ 0x1405e1ee0

undefined8 * gml_Script_pick_trinket(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  uint local_18c;
  longlong local_188;
  undefined4 local_17c;
  undefined4 local_178;
  longlong local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  char *local_148;
  undefined4 local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  uint uStack_10c;
  double local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined1 *local_c8;
  longlong local_b8;
  longlong lStack_b0;
  undefined1 local_a8 [64];
  undefined1 local_68 [48];
  
  local_178 = 0;
  local_148 = "gml_Script_rolled_list_new_run";
  local_150 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_150;
  local_140 = 0x73;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_154 = 0;
  local_160 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_140 = 0x75;
  uVar9 = 0;
  plVar4 = (longlong *)gml_Script_rolled_list_blocked(param_1,param_2,&local_1a8,0,0);
  if (plVar4 != &local_188) {
    local_138 = *plVar4;
    uStack_130 = plVar4[1];
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_138);
  }
  local_140 = 0x76;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_e8 = &local_188;
  uVar8 = CONCAT44(uVar9,DAT_141a0aa48);
  plVar4 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar8,&local_e8);
  lVar6 = 0;
  uVar7 = 0xffffff;
  if (plVar4 != &local_118) {
    local_138 = *plVar4;
    uStack_130 = plVar4[1];
    FUN_140041b80(&local_118,&local_138);
    lVar6 = local_118;
    uVar7 = uStack_10c;
  }
  local_140 = 0x77;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = 0.0;
  bVar1 = true;
  do {
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    iVar3 = 0;
    if (!bVar1) {
      local_140 = 0x77;
      uVar2 = local_18c & 0xffffff;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          if (uVar2 == 7) {
            local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
          }
          else if (uVar2 == 10) {
            local_198 = (double)((longlong)local_198 + 1);
          }
          else {
            if (uVar2 == 0xd) {
              local_18c = 0;
              goto LAB_1405e2135;
            }
            FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
          }
          goto LAB_1405e213f;
        }
        local_198 = (double)FUN_140e4b060(&local_198);
        local_18c = 0;
      }
LAB_1405e2135:
      local_198 = local_198 + 1.0;
    }
LAB_1405e213f:
    bVar1 = false;
    if ((uVar7 == 2) && (lVar6 != 0)) {
      iVar3 = *(int *)(lVar6 + 0x24);
    }
    local_fc = 0;
    local_108 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_198,&local_108,DAT_141955260,1);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      local_140 = 0x7f;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      gml_Script_settings_save(param_1,param_2,&local_1a8,0,0);
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_150;
      return param_3;
    }
    local_140 = 0x79;
    iVar3 = FUN_140e4a740(&local_198);
    plVar4 = (longlong *)0x0;
    if (((uVar7 & 0xffffff) == 2) && (lVar6 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar6 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar6 + 0x24));
      }
      else {
        plVar4 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar6 + 8));
      }
      if (plVar4 != &local_170) goto LAB_1405e2230;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar4 = &local_118;
LAB_1405e2230:
      local_b8 = *plVar4;
      lStack_b0 = plVar4[1];
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      FUN_140041b80(&local_170,&local_b8);
    }
    local_140 = 0x7a;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    local_e8 = &local_188;
    local_e0 = &local_170;
    uVar8 = CONCAT44(uVar9,DAT_141a01138);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar8,&local_e8);
    local_ec = 0;
    local_f8 = 0;
    iVar3 = FUN_140e851f0(uVar5,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (iVar3 == -2 || 0 < iVar3) {
      local_140 = 0x7d;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      local_160 = 0;
      local_158 = 0;
      local_154 = 5;
      local_e8 = &local_188;
      local_e0 = &local_170;
      local_d8 = &local_188;
      local_d0 = &local_170;
      uVar8 = CONCAT44(uVar9,DAT_141a01138);
      plVar4 = (longlong *)FUN_140e634e0(param_1,param_2,&local_160,2,uVar8,&local_e8);
      uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_11c = *(undefined4 *)((longlong)plVar4 + 0xc);
      uStack_120 = (undefined4)plVar4[1];
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
        local_128 = *plVar4;
      }
      else {
        FUN_1400419b0(&local_128,plVar4);
      }
      local_178 = 1;
      uStack_130 = CONCAT44(7,(undefined4)uStack_130);
      local_138 = CONCAT44(local_138._4_4_,1);
      FUN_1400462a0(&local_128,&local_138);
      if ((1 << ((byte)((ulonglong)uStack_130 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      lStack_b0 = CONCAT44(uStack_11c,uStack_120);
      local_b8 = local_128;
      if ((1 << (local_68[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_b8);
      local_178 = 0;
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_c8 = local_68;
      uVar8 = CONCAT44(uVar9,DAT_1419ffd28);
      FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar8,&local_d8);
    }
    else {
      local_140 = 0x7b;
      FUN_140e98dc0(param_1,param_2,&local_188,&local_170);
    }
  } while( true );
}

