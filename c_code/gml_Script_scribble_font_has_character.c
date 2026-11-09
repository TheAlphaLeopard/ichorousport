// gml_Script_scribble_font_has_character @ 0x14046e1d0

longlong *
gml_Script_scribble_font_has_character
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 **ppuVar7;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  longlong local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [16];
  longlong local_60;
  byte local_54;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_80 = "gml_Script_scribble_font_get_remap";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 8;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 10;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  plVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    plVar3 = &DAT_1419df7b0;
  }
  else {
    plVar3 = (longlong *)*param_5;
    if (plVar3 == &local_60) goto LAB_14046e2d9;
  }
  local_d8 = *plVar3;
  uStack_d0 = (undefined4)plVar3[1];
  uStack_cc = *(undefined4 *)((longlong)plVar3 + 0xc);
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  FUN_140041b80(&local_60,&local_d8);
LAB_14046e2d9:
  local_48 = &local_60;
  ppuVar7 = &local_48;
  uVar4 = FUN_1401effd0(param_1,param_2,&local_a8,1,ppuVar7);
  FUN_140e87440(uVar4,DAT_141a061b8,0x80000000,&local_98,(ulonglong)ppuVar7 & 0xffffffffffffff00,0);
  local_d8 = local_98;
  uStack_d0 = uStack_90;
  uStack_cc = uStack_8c;
  FUN_140041b80(&local_c8,&local_d8);
  if ((local_bc & 0xffffff) == 3) {
    bVar6 = local_c8 == 0;
  }
  else {
    bVar6 = (local_bc & 0xffffff) == 5;
  }
  bVar1 = (byte)local_bc;
  if (bVar6) {
    if (0 < param_4) {
      plVar5 = (longlong *)*param_5;
    }
    uStack_cc = *(undefined4 *)((longlong)plVar5 + 0xc);
    uStack_d0 = (int)plVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_d8 = *plVar5;
    }
    else {
      FUN_1400419b0(&local_d8,plVar5);
    }
    plVar5 = &local_d8;
    bVar2 = true;
    bVar6 = false;
  }
  else {
    uStack_ac = local_bc;
    uStack_b0 = local_c0;
    if ((1 << (bVar1 & 0x1f) & 0x46U) == 0) {
      local_b8 = local_c8;
    }
    else {
      FUN_1400419b0(&local_b8,&local_c8);
    }
    plVar5 = &local_b8;
    bVar2 = false;
    bVar6 = true;
  }
  if (plVar5 != param_3) {
    local_40 = (undefined4)*plVar5;
    uStack_3c = *(undefined4 *)((longlong)plVar5 + 4);
    uStack_38 = (undefined4)plVar5[1];
    uStack_34 = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_40);
  }
  if ((bVar6) && ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_b8);
  }
  if ((bVar2) && ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

