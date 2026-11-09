// gml_Script_InputPressed @ 0x1403620d0

undefined8 *
gml_Script_InputPressed
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  int iVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  ulonglong local_c8;
  int local_bc;
  ulonglong local_b8;
  undefined8 uStack_b0;
  ulonglong *local_a8;
  ulonglong *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined4 local_74;
  ulonglong local_70;
  undefined4 local_64;
  double local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  ulonglong local_38;
  undefined8 uStack_30;
  
  local_90 = "gml_Script_InputPlugInWarning";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 10;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_44 = 0;
  local_50 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_54 = 0;
  local_60 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0xc;
  puVar2 = (ulonglong *)FUN_140e8da20(&local_50,param_1,1,&DAT_141dd1568);
  if (puVar2 != &local_c8) {
    local_b8 = *puVar2;
    uStack_b0 = puVar2[1];
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_b8);
  }
  local_88 = 0xd;
  iVar1 = FUN_140e4a740(&local_60);
  uVar7 = (undefined4)((ulonglong)pcVar6 >> 0x20);
  do {
    if (iVar1 < 1) {
      local_88 = 0xe;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      uVar4 = (int)(DAT_1419f3588 | 0x5000000) >> 0x18 & 0xff;
      if (uVar4 == 0xf) {
        uVar5 = 0x4000004;
      }
      else {
        uVar5 = (ulonglong)(uVar4 | 0x1000000);
      }
      uStack_b0 = CONCAT44(0xf,(undefined4)uStack_b0);
      local_b8 = uVar5 << 0x20 | (ulonglong)(DAT_1419f3588 & 0xffffff);
      uStack_30 = uStack_b0;
      local_38 = local_b8;
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      FUN_140041b80(&local_80,&local_38);
      local_a8 = &local_80;
      local_a0 = &local_c8;
      FUN_140e634e0(param_1,param_2,&local_d8,2,CONCAT44(uVar7,DAT_1419f3168),&local_a8);
      if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_60);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_50);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      _eh_vector_destructor_iterator_(&local_80,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_98;
      return param_3;
    }
    uVar7 = (undefined4)((ulonglong)pcVar6 >> 0x20);
    iVar1 = iVar1 + -1;
    local_88 = 0xd;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50();
    }
    iVar3 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_a8 = &local_c8;
    if ((local_bc == 2) && (local_c8 != 0)) {
      iVar3 = *(int *)(local_c8 + 0x24);
    }
    if (iVar3 + -1 < param_4) {
      puVar2 = *(ulonglong **)(param_5 + -8 + (longlong)iVar3 * 8);
      if (puVar2 != &local_70) goto LAB_14036226e;
    }
    else {
      puVar2 = &DAT_1419df7b0;
LAB_14036226e:
      local_b8 = *puVar2;
      uStack_b0 = puVar2[1];
      if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      FUN_140041b80(&local_70,&local_b8);
    }
    local_a0 = &local_70;
    pcVar6 = (code *)CONCAT44(uVar7,DAT_1419fe568);
    FUN_140e634e0(param_1,param_2,&local_d8,2,pcVar6,&local_a8);
    uVar7 = (undefined4)((ulonglong)pcVar6 >> 0x20);
  } while( true );
}

