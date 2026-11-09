// gml_Script_anon_1400____struct___574_gml_Object_oHitable_Create_0 @ 0x140b08000

undefined8 *
gml_Script_anon_1400____struct___574_gml_Object_oHitable_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double *pdVar5;
  double *pdVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  ulonglong uVar11;
  double local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  double local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  double local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  char *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_78 = "gml_Script_anon@752@___struct___574@gml_Object_oHitable_Create_0";
  local_80 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_80;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_c4 = 0;
  local_d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_70 = 0x3a;
  uVar2 = (**(code **)(*param_1 + 8))(0,DAT_1419ff808);
  local_d8 = uVar2;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09708);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  FUN_140e87170(uVar2,DAT_1419fe0e8,0x80000000,&local_a0,param_1,param_2);
  pdVar6 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*param_5;
  }
  uStack_dc = *(uint *)((longlong)pdVar5 + 0xc);
  uStack_e0 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_e8);
  }
  FUN_140042560(&local_e8,uVar3);
  uStack_ec = uStack_dc;
  uStack_f0 = uStack_e0;
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_f8 = local_e8;
  }
  else {
    FUN_1400419b0(&local_f8,&local_e8);
  }
  FUN_140042560(&local_f8,uVar4);
  if (param_4 < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)param_5[1];
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar5;
  }
  else {
    dVar8 = (double)FUN_140e4b060();
  }
  dVar9 = local_f8;
  if ((uStack_ec & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_f8);
  }
  fVar7 = (float)FUN_140e78f90((float)dVar9,(float)dVar8);
  FUN_140162c50(&local_a0,(double)fVar7);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e86c30(local_d8,DAT_1419fe0e8,0x80000000,&local_a0);
  local_70 = 0x3b;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  local_d8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff808);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09708);
  plVar10 = param_1;
  uVar11 = param_2;
  FUN_140e87170(local_d8,DAT_1419fe158,0x80000000,&local_b0,param_1,param_2);
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*param_5;
  }
  uStack_dc = *(uint *)((longlong)pdVar5 + 0xc);
  uStack_e0 = *(undefined4 *)(pdVar5 + 1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = *pdVar5;
  }
  else {
    FUN_1400419b0(&local_e8);
  }
  FUN_140042560(&local_e8,uVar3);
  uStack_ec = uStack_dc;
  uStack_f0 = uStack_e0;
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_f8 = local_e8;
  }
  else {
    FUN_1400419b0(&local_f8,&local_e8);
  }
  FUN_140042560(&local_f8,uVar2);
  if (1 < param_4) {
    pdVar6 = (double *)param_5[1];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar6;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar6);
  }
  dVar9 = local_f8;
  if ((uStack_ec & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_f8);
  }
  fVar7 = (float)FUN_140e79010((float)dVar9,(float)dVar8);
  FUN_140162c50(&local_b0,(double)fVar7);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e86c30(local_d8,DAT_1419fe158,0x80000000,&local_b0);
  local_70 = 0x3c;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff808);
  FUN_140e87440(uVar2,DAT_1419f6348,0x80000000,&local_68,(ulonglong)plVar10 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  uVar2 = FUN_140069500(uVar2);
  pdVar6 = (double *)FUN_140e63610(uVar2,param_2,&local_d0,0,&local_68,0);
  if (pdVar6 != &local_c0) {
    local_f8 = *pdVar6;
    uStack_f0 = *(undefined4 *)(pdVar6 + 1);
    uStack_ec = *(uint *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_f8);
  }
  local_70 = 0x3d;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3608);
  iVar1 = FUN_140e851f0(&local_c0,uVar2,DAT_141955260,1);
  if (0 < iVar1) {
    local_70 = 0x3e;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3608);
    uStack_ec = *(uint *)((longlong)pdVar6 + 0xc);
    uStack_f0 = *(undefined4 *)(pdVar6 + 1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
      local_f8 = *pdVar6;
    }
    else {
      FUN_1400419b0(&local_f8,pdVar6);
    }
    FUN_140046500(&local_f8,&local_c0);
    local_e8 = local_f8;
    uStack_e0 = uStack_f0;
    uStack_dc = uStack_ec;
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_e8);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_70 = 0x3f;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff808);
    FUN_140e87170(uVar2,DAT_1419fe0e8,0x80000000,&local_a0,param_1,param_2);
    FUN_140042560(&local_a0,&local_90);
    FUN_140e86c30(uVar2,DAT_1419fe0e8,0x80000000,&local_a0);
    local_70 = 0x40;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff808);
    FUN_140e87170(uVar2,DAT_1419fe158,0x80000000,&local_b0,param_1,param_2);
    FUN_140042560(&local_b0,&local_90);
    FUN_140e86c30(uVar2,DAT_1419fe158,0x80000000,&local_b0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  DAT_141dc7a50 = (undefined8 *)local_80;
  return param_3;
}

