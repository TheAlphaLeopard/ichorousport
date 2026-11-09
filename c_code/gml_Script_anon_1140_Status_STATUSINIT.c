// gml_Script_anon_1140_Status_STATUSINIT @ 0x1405c02a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1140_Status_STATUSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined1 **ppuVar9;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  char *local_38;
  undefined4 local_30;
  
  local_38 = "gml_Script_stun_thresh_from_hp";
  local_40 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_40;
  local_30 = 0x1e;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_30 = 0x1f;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uStack_dc = 0xf;
  local_e8 = 0x1000000000000ee;
  local_d8 = 0x1000000000000ee;
  uStack_d0 = uStack_e0;
  uStack_cc = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_d8);
  local_50 = local_78;
  ppuVar9 = &local_50;
  uVar6 = CONCAT44(uVar7,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar6,ppuVar9);
  cVar3 = FUN_140e491e0(uVar4);
  if (cVar3 == '\0') {
    local_ec = 0;
    local_f8 = 0x4024000000000000;
    puVar5 = &local_f8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    local_ec = 0xf;
    local_f8 = 0x1000000000000ee;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(&local_f8,DAT_141a0a7d8,0x80000000,&local_a8,uVar6,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    uStack_cc = local_9c;
    uStack_d0 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_d8 = local_a8;
    }
    else {
      FUN_1400419b0(&local_d8,&local_a8);
    }
    puVar5 = &local_d8;
    bVar2 = true;
    bVar1 = false;
  }
  uVar7 = local_ec;
  uVar8 = (undefined4)(uVar6 >> 0x20);
  local_e8 = *puVar5;
  uStack_e0 = *(undefined4 *)(puVar5 + 1);
  uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_e8);
  if (bVar1) {
    if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
  }
  if (bVar2) {
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
  }
  local_30 = 0x20;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_ec = *(undefined4 *)((longlong)param_5 + 0xc);
  local_f0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_f8);
  }
  FUN_140046500(&local_f8,&local_98);
  uStack_cc = local_ec;
  uStack_d0 = local_f0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_d8 = local_f8;
  }
  else {
    FUN_1400419b0(&local_d8,&local_f8);
  }
  uStack_dc = 0;
  local_e8 = 0x3fdccccccccccccd;
  FUN_140042560(&local_d8,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = local_d8;
  uStack_e0 = uStack_d0;
  uStack_dc = uStack_cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_58 = local_88;
  local_e8 = CONCAT44(uRam00000001419e6944,_DAT_1419e6940);
  uStack_e0 = uRam00000001419e6948;
  uStack_dc = uRam00000001419e694c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_e8);
  local_50 = local_78;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar8,DAT_1419fd658),&local_58);
  if (puVar5 != &local_68) {
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_e8);
  }
  local_48 = &local_68;
  puVar5 = (undefined8 *)FUN_140e79090(&local_c8,2,&local_50);
  if (puVar5 != param_3) {
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_40;
  return param_3;
}

