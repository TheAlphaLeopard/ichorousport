// gml_Object_oClotBones_Step_0 @ 0x1408a69a0

undefined8 *
gml_Object_oClotBones_Step_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  double *pdVar5;
  undefined8 uVar6;
  double *pdVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar11;
  undefined8 uVar10;
  ulonglong in_stack_fffffffffffffef0;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  double local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [12];
  byte local_9c;
  double local_98;
  undefined4 local_8c;
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double dStack_70;
  double *local_68;
  undefined1 *local_60;
  double *local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  char *local_38;
  undefined4 local_30;
  
  local_38 = "gml_Script_anon@116@gml_Object_oChunkProperties_Create_0";
  local_40 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_40;
  local_30 = 8;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_dc = 0;
  local_e8 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_44 = 0;
  local_50 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_30 = 10;
  uStack_100._4_4_ = 0xf;
  local_108 = 7.29112201955681e-304;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_108,DAT_1419f4f18,0x80000000,&local_88,uVar9,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_100 = (double)CONCAT44(uStack_7c,uStack_80);
  local_108 = local_88;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  iVar3 = DAT_141a56cb0;
  local_60 = local_a8;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = (double)iVar3;
  local_58 = &local_98;
  uVar6 = CONCAT44(uVar11,DAT_141a035d8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar6,&local_60);
  uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (pdVar5 != &local_f8) {
    local_108 = *pdVar5;
    uStack_100 = pdVar5[1];
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_108);
  }
  local_30 = 0xb;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56cb0);
  local_68 = &local_f8;
  uVar10 = CONCAT44(uVar11,DAT_1419fdc08);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar10,&local_68);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar4 = FUN_140e491e0(uVar6);
  if (cVar4 == '\0') {
    local_bc = local_ec;
    local_c0 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_c8 = local_f8;
    }
    else {
      FUN_1400419b0(&local_c8,&local_f8);
    }
    pdVar7 = &local_c8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pdVar7 = (double *)FUN_140e8da20(&local_50,param_1,0);
    uStack_100 = pdVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_108 = *pdVar7;
    }
    else {
      FUN_1400419b0(&local_108,pdVar7);
    }
    pdVar7 = &local_108;
    bVar2 = true;
    bVar1 = false;
  }
  local_78 = *pdVar7;
  dStack_70 = pdVar7[1];
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_78);
  if ((bVar1) && ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_c8);
  }
  if ((bVar2) && ((1 << ((byte)((ulonglong)uStack_100 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_108);
  }
  local_60 = local_a8;
  if (param_4 < 1) {
    pdVar7 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar7 = (double *)*param_5;
    if (pdVar7 == &local_98) goto LAB_1408a6d8f;
  }
  local_78 = *pdVar7;
  dStack_70 = pdVar7[1];
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_78);
LAB_1408a6d8f:
  local_58 = &local_98;
  FUN_140e609c0(param_1);
  pdVar7 = (double *)
           FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar11,DAT_1419ff868),&local_60);
  if (pdVar7 != pdVar5) {
    local_78 = *pdVar7;
    dStack_70 = pdVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    FUN_140041b80(pdVar5,&local_78);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_40;
  return param_3;
}

