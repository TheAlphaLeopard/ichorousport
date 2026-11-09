// gml_Script_anon_14897_SnowState_SnowState @ 0x140501fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_14897_SnowState_SnowState
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  double local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_80 = "gml_Script_anon@13664@SnowState@SnowState";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x1b9;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_64 = 0;
  local_70 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x1ba;
  local_b8 = _DAT_141dd3b38;
  uStack_b0 = uRam0000000141dd3b40;
  FUN_140041b80(&local_a8,&local_b8);
  local_78 = 0x1bb;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0;
  iVar1 = FUN_140e4a740(&local_70);
  uVar6 = (undefined4)((ulonglong)pcVar5 >> 0x20);
  do {
    if (iVar1 < 1) {
      local_78 = 0x1be;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      local_res8 = &local_a8;
      FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar6,DAT_141a03478),&local_res8);
      local_78 = 0x1bf;
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
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      _eh_vector_destructor_iterator_(&local_98,0x10,1,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_88;
      return param_3;
    }
    uVar6 = (undefined4)((ulonglong)pcVar5 >> 0x20);
    iVar1 = iVar1 + -1;
    local_78 = 0x1bc;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uStack_b0 = CONCAT44(local_bc,local_c0);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_b8 = local_c8;
    }
    else {
      FUN_1400419b0(&local_b8,&local_c8);
    }
    FUN_140046040(&local_c8);
    iVar2 = FUN_140e4a740(&local_b8);
    if (iVar2 < param_4) {
      puVar4 = *(undefined8 **)(param_5 + (longlong)iVar2 * 8);
      if (puVar4 != &local_98) goto LAB_14050217b;
    }
    else {
      puVar4 = &DAT_1419df7b0;
LAB_14050217b:
      local_60 = *puVar4;
      uStack_58 = puVar4[1];
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_60);
    }
    if ((1 << ((byte)((ulonglong)uStack_b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_res8 = &local_98;
    pcVar5 = (code *)CONCAT44(uVar6,DAT_1419fcb18);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,1,pcVar5,&local_res8);
    FUN_1400460e0(&local_a8,uVar3);
    uVar6 = (undefined4)((ulonglong)pcVar5 >> 0x20);
  } while( true );
}

