// gml_Script_anon_13977_SnowState_SnowState @ 0x140501ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_13977_SnowState_SnowState
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 local_90 [12];
  undefined4 local_84;
  undefined8 *local_80;
  undefined1 *local_78;
  double local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_b0 = "gml_Script_anon@13385@SnowState@SnowState";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x1ad;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_a0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_64 = 0;
  local_70 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x1ae;
  local_d8 = _DAT_141dd3c38;
  uStack_d0 = uRam0000000141dd3c40;
  FUN_140041b80(&local_c8,&local_d8);
  local_a8 = 0x1af;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0;
  iVar1 = FUN_140e4a740(&local_70);
  uVar6 = (undefined4)((ulonglong)pcVar5 >> 0x20);
  do {
    if (iVar1 < 1) {
      local_a8 = 0x1b2;
      FUN_1400460e0(&local_c8,&DAT_141dd3a38);
      local_a8 = 0x1b3;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      local_80 = &local_c8;
      local_60 = _DAT_1419df7c0;
      uStack_58 = uRam00000001419df7c8;
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_90);
      }
      FUN_140041b80(local_90,&local_60);
      local_78 = local_90;
      FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar6,DAT_141a010a8),&local_80);
      local_a8 = 0x1b4;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 6;
      *param_3 = param_1;
      uVar3 = FUN_140e5c910();
      FUN_140e42c10(uVar3,param_1);
      if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      _eh_vector_destructor_iterator_(&local_a0,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_b8;
      return param_3;
    }
    uVar6 = (undefined4)((ulonglong)pcVar5 >> 0x20);
    iVar1 = iVar1 + -1;
    local_a8 = 0x1b0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uStack_d0 = CONCAT44(local_dc,local_e0);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
      local_d8 = local_e8;
    }
    else {
      FUN_1400419b0(&local_d8,&local_e8);
    }
    FUN_140046040(&local_e8);
    iVar2 = FUN_140e4a740(&local_d8);
    if (iVar2 < param_4) {
      puVar4 = *(undefined8 **)(param_5 + (longlong)iVar2 * 8);
      if (puVar4 != &local_a0) goto LAB_140501d80;
    }
    else {
      puVar4 = &DAT_1419df7b0;
LAB_140501d80:
      local_60 = *puVar4;
      uStack_58 = puVar4[1];
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_60);
    }
    if ((1 << ((byte)((ulonglong)uStack_d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_80 = &local_a0;
    pcVar5 = (code *)CONCAT44(uVar6,DAT_1419fcb18);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,1,pcVar5,&local_80);
    FUN_1400460e0(&local_c8,uVar3);
    uVar6 = (undefined4)((ulonglong)pcVar5 >> 0x20);
  } while( true );
}

