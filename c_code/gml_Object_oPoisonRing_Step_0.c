// gml_Object_oPoisonRing_Step_0 @ 0x140c9ca00

void gml_Object_oPoisonRing_Step_0(ulonglong param_1,ulonglong param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 *local_res20;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  ulonglong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  undefined4 local_c0;
  uint local_bc;
  ulonglong local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  ulonglong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  local_80 = "gml_Object_oPlayerWall_Step_0";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_78 = 3;
  uStack_cc = 0xf;
  local_d8 = 0x1000000000000ee;
  local_e8 = 0x1000000000000ee;
  uStack_e0 = uStack_d0;
  uStack_dc = 0xf;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_e8);
  local_res20 = local_60;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_50,1,CONCAT44(uVar5,DAT_141a02ef8),&local_res20);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    local_78 = 3;
    goto LAB_140c9d0bb;
  }
  local_78 = 5;
  uStack_dc = 0xf;
  local_e8 = 0x1000000000000ee;
  uVar6 = param_1;
  uVar7 = param_2;
  FUN_140e87170(&local_e8,DAT_1419fe0e8,0x80000000,&local_c8,param_1,param_2);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0a798,0x80000000,&local_70,uVar6,uVar7);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = local_bc;
  uStack_e0 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_e8 = local_c8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_c8);
  }
  FUN_1400462a0(&local_e8,&local_70);
  if ((uStack_dc & 0xffffff) == 0) {
    uVar5 = (undefined4)local_e8;
  }
  else {
    uVar5 = FUN_140e4b060(&local_e8);
  }
  dVar1 = (double)FUN_140e78d00(uVar5);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (dVar1 < 16.0) {
LAB_140c9cdba:
    uStack_cc = 6;
    local_d8 = param_1;
    FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_98,uVar6 & 0xffffffffffffff00,
                  uVar7 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uStack_cc = 0xf;
    local_d8 = 0x1000000000000ee;
    FUN_140e87170(&local_d8,DAT_1419fe0e8,0x80000000,&local_c8,param_1,param_2);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uStack_dc = local_8c;
    uStack_e0 = local_90;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
      local_e8 = local_98;
    }
    else {
      FUN_1400419b0(&local_e8,&local_98);
    }
    FUN_1400462a0(&local_e8,&local_c8);
    if ((uStack_dc & 0xffffff) == 0) {
      uVar5 = (undefined4)local_e8;
    }
    else {
      uVar5 = FUN_140e4b060(&local_e8);
    }
    dVar1 = (double)FUN_140e78d00(uVar5);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (16.0 <= dVar1) {
      uStack_cc = 0xf;
      local_d8 = 0x1000000000000ee;
      FUN_140e87170(&local_d8,DAT_1419fe0e8,0x80000000,&local_c8,param_1,param_2);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_b8);
      uStack_dc = local_ac;
      uStack_e0 = local_b0;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
        local_e8 = local_b8;
      }
      else {
        FUN_1400419b0(&local_e8,&local_b8);
      }
      uStack_cc = 0;
      local_d8 = 0x4000000000000000;
      FUN_140046500(&local_e8,&local_d8);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      iVar3 = FUN_140e851f0(&local_c8,&local_e8,DAT_141955260,1);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if (0 < iVar3) goto LAB_140c9d002;
    }
    local_78 = 8;
    uStack_cc = 0xf;
    local_d8 = 0x1000001000003ee;
    local_e8 = 0x1000001000003ee;
    uStack_e0 = uStack_d0;
    uStack_dc = 0xf;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  else {
    uStack_dc = 0xf;
    local_e8 = 0x1000000000000ee;
    uVar6 = param_1;
    uVar7 = param_2;
    FUN_140e87170(&local_e8,DAT_1419fe0e8,0x80000000,&local_c8,param_1,param_2);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_b8);
    uStack_dc = local_ac;
    uStack_e0 = local_b0;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
      local_e8 = local_b8;
    }
    else {
      FUN_1400419b0(&local_e8,&local_b8);
    }
    uStack_cc = 0;
    local_d8 = 0x4000000000000000;
    FUN_140046500(&local_e8,&local_d8);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    iVar3 = FUN_140e851f0(&local_c8,&local_e8,DAT_141955260,1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (iVar3 == -2 || -1 < iVar3) goto LAB_140c9cdba;
LAB_140c9d002:
    local_78 = 6;
    uStack_cc = 0xf;
    local_d8 = 0x10000010000011b;
    local_e8 = 0x10000010000011b;
    uStack_e0 = uStack_d0;
    uStack_dc = 0xf;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_a8);
LAB_140c9d0bb:
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

