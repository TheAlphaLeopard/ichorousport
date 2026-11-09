// gml_GlobalScript_screenFlash @ 0x14044bb20

undefined8 * gml_GlobalScript_screenFlash(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff00;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_90 = "gml_Script_anon@5805@pal_swap_enable_layer@scr_retro_pal_swapper";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_98;
  local_88 = 0x95;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f74e8);
  uStack_9c = 0xffffff;
  local_a8 = (undefined8 *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = (undefined8 *)0x0;
  local_ec = 0;
  local_f8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x96;
  FUN_140e85f80(param_1,DAT_1419f7448,0x80000000,&local_80);
  uStack_e0 = (char *)(ulonglong)(uint)uStack_e0;
  local_e8 = (undefined8 *)0x4020000000000000;
  iVar2 = FUN_140e851f0(&local_80,&local_e8,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (iVar2 == 0) {
    local_88 = 0x97;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f0 = 0;
    uStack_e0 = "gml_Script_pal_swap_reset";
    local_e8 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_e8;
    local_ec = 5;
    local_f8 = 0;
    local_d8 = 0x71;
    iVar2 = FUN_140ec9d80();
    if (iVar2 != -1) {
      local_d8 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = (undefined8 **)local_e8;
    local_88 = 0x98;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419f5248,0x80000000,&local_a8,uVar6,
                  in_stack_ffffffffffffff00 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar6 >> 0x20);
    local_e8 = local_a8;
    uStack_e0 = (char *)CONCAT44(uStack_9c,uStack_a0);
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_e8);
    local_40 = local_70;
    ppuVar8 = &local_40;
    uVar6 = CONCAT44(uVar7,DAT_1419f7478);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar6,ppuVar8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_88 = 0x9a;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_1419f5248,0x80000000,&local_a8,uVar6,uVar9);
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_1419f4f38,0x80000000,&local_b8,uVar6,uVar9 & 0xffffffffffffff00);
      uVar7 = (undefined4)(uVar6 >> 0x20);
      local_e8 = local_a8;
      uStack_e0 = (char *)CONCAT44(uStack_9c,uStack_a0);
      if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_60);
      }
      FUN_140041b80(local_60,&local_e8);
      local_38 = local_60;
      local_e8 = local_b8;
      uStack_e0 = (char *)CONCAT44(uStack_ac,uStack_b0);
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_50);
      }
      FUN_140041b80(local_50,&local_e8);
      local_30 = local_50;
      ppuVar8 = &local_38;
      uVar6 = CONCAT44(uVar7,DAT_1419f73e8);
      FUN_140e634e0(param_1,param_2,&local_c8,2,uVar6,ppuVar8);
      local_88 = 0x9b;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_1419f4f38,0x80000000,&local_b8,uVar6,
                    (ulonglong)ppuVar8 & 0xffffffffffffff00);
      uVar7 = (undefined4)(uVar6 >> 0x20);
      local_e8 = local_b8;
      uStack_e0 = (char *)CONCAT44(uStack_ac,uStack_b0);
      if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_70);
      }
      FUN_140041b80(local_70,&local_e8);
      local_40 = local_70;
      FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar7,DAT_1419f7508),&local_40);
    }
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 **)local_98;
  return param_3;
}

