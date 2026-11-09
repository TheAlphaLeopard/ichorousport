// gml_Script_anon_2704_gml_Object_oRogueLevelManager_Other_11 @ 0x140ce5330

undefined8 *
gml_Script_anon_2704_gml_Object_oRogueLevelManager_Other_11
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
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
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
  
  local_60 = "gml_Script_anon@2149@gml_Object_oRogueLevelManager_Other_11";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x68;
  _eh_vector_constructor_iterator_(&local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  uStack_cc = 0;
  local_d8 = 0.0;
  local_58 = 0x6a;
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
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400460e0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_78 = &local_98;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140ce54d3:
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_b8);
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 != &local_88) goto LAB_140ce54d3;
  }
  local_70 = &local_88;
  uVar4 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 0x6a;
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
            goto LAB_140ce558c;
          }
          FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        }
        goto LAB_140ce5596;
      }
      local_d8 = (double)FUN_140e4b060(&local_d8);
      uStack_cc = 0;
    }
LAB_140ce558c:
    local_d8 = local_d8 + 1.0;
  }
LAB_140ce5596:
  local_58 = 0x6b;
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
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400462a0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_78 = &local_98;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140ce56bd:
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_b8);
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 != &local_88) goto LAB_140ce56bd;
  }
  local_70 = &local_88;
  uVar4 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 0x6b;
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
            goto LAB_140ce5784;
          }
          FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        }
        goto LAB_140ce578e;
      }
      local_d8 = (double)FUN_140e4b060(&local_d8);
      uStack_cc = 0;
    }
LAB_140ce5784:
    local_d8 = local_d8 + 1.0;
  }
LAB_140ce578e:
  local_58 = 0x6c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140ce57f2:
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_b8);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_98) goto LAB_140ce57f2;
  }
  local_78 = &local_98;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400460e0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_70 = &local_88;
  uVar4 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 0x6c;
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
            goto LAB_140ce597c;
          }
          FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        }
        goto LAB_140ce5986;
      }
      local_d8 = (double)FUN_140e4b060(&local_d8);
      uStack_cc = 0;
    }
LAB_140ce597c:
    local_d8 = local_d8 + 1.0;
  }
LAB_140ce5986:
  local_58 = 0x6d;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140ce59ea:
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_b8);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_98) goto LAB_140ce59ea;
  }
  local_78 = &local_98;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400462a0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_70 = &local_88;
  uVar4 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 0x6d;
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
            goto LAB_140ce5b70;
          }
          FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        }
        goto LAB_140ce5b7a;
      }
      local_d8 = (double)FUN_140e4b060(&local_d8);
      uStack_cc = 0;
    }
LAB_140ce5b70:
    local_d8 = local_d8 + 1.0;
  }
LAB_140ce5b7a:
  local_58 = 0x6f;
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
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400460e0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_78 = &local_98;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400460e0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_70 = &local_88;
  uVar4 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 0x6f;
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
            goto LAB_140ce5ddc;
          }
          FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        }
        goto LAB_140ce5de6;
      }
      local_d8 = (double)FUN_140e4b060(&local_d8);
      uStack_cc = 0;
    }
LAB_140ce5ddc:
    local_d8 = local_d8 + 1.0;
  }
LAB_140ce5de6:
  local_58 = 0x70;
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
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400462a0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_78 = &local_98;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400460e0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_70 = &local_88;
  uVar4 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 0x70;
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
            goto LAB_140ce6048;
          }
          FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        }
        goto LAB_140ce6052;
      }
      local_d8 = (double)FUN_140e4b060(&local_d8);
      uStack_cc = 0;
    }
LAB_140ce6048:
    local_d8 = local_d8 + 1.0;
  }
LAB_140ce6052:
  local_58 = 0x71;
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
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400460e0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_78 = &local_98;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400462a0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_70 = &local_88;
  uVar4 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 0x71;
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
            goto LAB_140ce62b4;
          }
          FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        }
        goto LAB_140ce62be;
      }
      local_d8 = (double)FUN_140e4b060(&local_d8);
      uStack_cc = 0;
    }
LAB_140ce62b4:
    local_d8 = local_d8 + 1.0;
  }
LAB_140ce62be:
  local_58 = 0x72;
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
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400462a0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_78 = &local_98;
  if (1 < param_4) {
    puVar6 = (undefined8 *)param_5[1];
  }
  uStack_bc = *(uint *)((longlong)puVar6 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_c8,puVar6);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400462a0(&local_c8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_70 = &local_88;
  uVar3 = FUN_140e63610(param_1,param_2,&local_a8,2,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') goto LAB_140ce6527;
  local_58 = 0x72;
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
        goto LAB_140ce6527;
      }
      if (uVar2 == 10) {
        local_d8 = (double)((longlong)local_d8 + 1);
        goto LAB_140ce6527;
      }
      if (uVar2 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
        goto LAB_140ce6527;
      }
      uStack_cc = 0;
    }
  }
  local_d8 = local_d8 + 1.0;
LAB_140ce6527:
  local_58 = 0x74;
  if (&local_d8 != param_3) {
    local_b8 = (int)local_d8;
    uStack_b4 = local_d8._4_4_;
    uStack_b0 = uStack_d0;
    uStack_ac = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_b8);
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

