// gml_Script____struct___116 @ 0x1402e5f70

longlong *
gml_Script____struct___116
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  longlong local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  byte local_74;
  longlong local_70;
  byte local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *local_48;
  longlong *local_40;
  
  local_a0 = "gml_Script_status_get_color";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xbb;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  plVar3 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef4d8);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xbc;
  if (plVar3 != &local_80) {
    local_e8 = *plVar3;
    uStack_e0 = (undefined4)plVar3[1];
    uStack_dc = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_e8);
  }
  local_48 = &local_80;
  if (param_4 < 1) {
    plVar3 = &DAT_1419df7b0;
  }
  else {
    plVar3 = (longlong *)*param_5;
    if (plVar3 == &local_70) goto LAB_1402e60bb;
  }
  local_e8 = *plVar3;
  uStack_e0 = (undefined4)plVar3[1];
  uStack_dc = *(undefined4 *)((longlong)plVar3 + 0xc);
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_e8);
LAB_1402e60bb:
  local_40 = &local_70;
  bVar2 = false;
  bVar1 = true;
  plVar3 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar7,DAT_141a01138),&local_48);
  lVar5 = 0;
  uVar4 = 0xffffff;
  if (plVar3 != &local_d8) {
    local_e8 = *plVar3;
    uStack_e0 = (undefined4)plVar3[1];
    uStack_dc = *(undefined4 *)((longlong)plVar3 + 0xc);
    FUN_140041b80(&local_d8,&local_e8);
    lVar5 = local_d8;
    uVar4 = local_cc;
  }
  if ((uVar4 & 0xffffff) == 3) {
    bVar6 = lVar5 == 0;
  }
  else {
    bVar6 = (uVar4 & 0xffffff) == 5;
  }
  if (bVar6) {
    uStack_dc = 0;
    local_e8 = 0x416fffffe0000000;
    plVar3 = &local_e8;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    uStack_bc = uVar4;
    uStack_c0 = local_d0;
    if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) == 0) {
      local_c8 = lVar5;
    }
    else {
      FUN_1400419b0(&local_c8,&local_d8);
    }
    plVar3 = &local_c8;
  }
  uVar7 = uStack_dc;
  if (plVar3 != param_3) {
    local_60 = (undefined4)*plVar3;
    uStack_5c = *(undefined4 *)((longlong)plVar3 + 4);
    uStack_58 = (undefined4)plVar3[1];
    uStack_54 = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_60);
  }
  if ((bVar1) && ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_c8);
  }
  if ((bVar2) && ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

