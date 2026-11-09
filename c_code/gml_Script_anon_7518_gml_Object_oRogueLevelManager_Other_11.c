// gml_Script_anon_7518_gml_Object_oRogueLevelManager_Other_11 @ 0x140cf2ad0

undefined8 *
gml_Script_anon_7518_gml_Object_oRogueLevelManager_Other_11
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_anon@11493@gml_Object_oRogueLevelManager_Other_11";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x17b;
  _eh_vector_constructor_iterator_(&local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  uStack_cc = 0;
  local_d8 = 0.0;
  local_58 = 0x17d;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_b8);
  }
  uStack_bc = 7;
  local_c8 = 1;
  FUN_1400460e0(&local_b8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = (undefined4)local_b8;
  uStack_c4 = local_b8._4_4_;
  uStack_c0 = uStack_b0;
  uStack_bc = uStack_ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_c8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_78 = &local_98;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140cf2c74:
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 != &local_88) goto LAB_140cf2c74;
  }
  local_70 = &local_88;
  uVar4 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 0x17d;
    uVar2 = uStack_cc & 0xffffff;
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        if (uVar2 == 7) {
          local_d8 = (double)CONCAT44(local_d8._4_4_,(int)local_d8 + 1);
        }
        else if (uVar2 == 10) {
          local_d8 = (double)((longlong)local_d8 + 1);
        }
        else {
          if (uVar2 == 0xd) {
            uStack_cc = 0;
            goto LAB_140cf2d2d;
          }
          FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        }
        goto LAB_140cf2d37;
      }
      local_d8 = (double)FUN_140e4b060(&local_d8);
      uStack_cc = 0;
    }
LAB_140cf2d2d:
    local_d8 = local_d8 + 1.0;
  }
LAB_140cf2d37:
  local_58 = 0x17e;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_b8);
  }
  uStack_bc = 7;
  local_c8 = 1;
  FUN_1400462a0(&local_b8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = (undefined4)local_b8;
  uStack_c4 = local_b8._4_4_;
  uStack_c0 = uStack_b0;
  uStack_bc = uStack_ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_c8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_78 = &local_98;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140cf2e5e:
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 != &local_88) goto LAB_140cf2e5e;
  }
  local_70 = &local_88;
  uVar4 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 0x17e;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
    uVar2 = uStack_cc & 0xffffff;
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        if (uVar2 == 7) {
          local_d8 = (double)CONCAT44(local_d8._4_4_,(int)local_d8 + 1);
        }
        else if (uVar2 == 10) {
          local_d8 = (double)((longlong)local_d8 + 1);
        }
        else {
          if (uVar2 == 0xd) {
            uStack_cc = 0;
            goto LAB_140cf2f25;
          }
          FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        }
        goto LAB_140cf2f2f;
      }
      local_d8 = (double)FUN_140e4b060(&local_d8);
      uStack_cc = 0;
    }
LAB_140cf2f25:
    local_d8 = local_d8 + 1.0;
  }
LAB_140cf2f2f:
  local_58 = 0x17f;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140cf2f93:
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_98) goto LAB_140cf2f93;
  }
  local_78 = &local_98;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_b8);
  }
  uStack_bc = 7;
  local_c8 = 1;
  FUN_1400460e0(&local_b8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = (undefined4)local_b8;
  uStack_c4 = local_b8._4_4_;
  uStack_c0 = uStack_b0;
  uStack_bc = uStack_ac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_c8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_70 = &local_88;
  uVar4 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 0x17f;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
    uVar2 = uStack_cc & 0xffffff;
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        if (uVar2 == 7) {
          local_d8 = (double)CONCAT44(local_d8._4_4_,(int)local_d8 + 1);
        }
        else if (uVar2 == 10) {
          local_d8 = (double)((longlong)local_d8 + 1);
        }
        else {
          if (uVar2 == 0xd) {
            uStack_cc = 0;
            goto LAB_140cf311d;
          }
          FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        }
        goto LAB_140cf3127;
      }
      local_d8 = (double)FUN_140e4b060(&local_d8);
      uStack_cc = 0;
    }
LAB_140cf311d:
    local_d8 = local_d8 + 1.0;
  }
LAB_140cf3127:
  local_58 = 0x180;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140cf318b:
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_98) goto LAB_140cf318b;
  }
  local_78 = &local_98;
  if (1 < param_4) {
    puVar6 = (undefined8 *)param_5[1];
  }
  uStack_ac = *(uint *)((longlong)puVar6 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_b8,puVar6);
  }
  uStack_bc = 7;
  local_c8 = 1;
  FUN_1400462a0(&local_b8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = (undefined4)local_b8;
  uStack_c4 = local_b8._4_4_;
  uStack_c0 = uStack_b0;
  uStack_bc = uStack_ac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_c8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_70 = &local_88;
  uVar3 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') goto LAB_140cf3318;
  local_58 = 0x180;
  (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
  uVar2 = uStack_cc & 0xffffff;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      local_d8 = (double)FUN_140e4b060(&local_d8);
      uStack_cc = 0;
    }
    else {
      if (uVar2 == 7) {
        local_d8 = (double)CONCAT44(local_d8._4_4_,(int)local_d8 + 1);
        goto LAB_140cf3318;
      }
      if (uVar2 == 10) {
        local_d8 = (double)((longlong)local_d8 + 1);
        goto LAB_140cf3318;
      }
      if (uVar2 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        goto LAB_140cf3318;
      }
      uStack_cc = 0;
    }
  }
  local_d8 = local_d8 + 1.0;
LAB_140cf3318:
  local_58 = 0x181;
  if (&local_d8 != param_3) {
    local_c8 = (int)local_d8;
    uStack_c4 = local_d8._4_4_;
    uStack_c0 = uStack_d0;
    uStack_bc = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

