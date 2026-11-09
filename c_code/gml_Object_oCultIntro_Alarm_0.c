// gml_Object_oCultIntro_Alarm_0 @ 0x1408d9ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oCultIntro_Alarm_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  double dVar9;
  undefined4 uVar11;
  undefined8 uVar10;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  longlong local_a0;
  byte local_94;
  longlong local_90;
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  double local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  double *local_58;
  undefined1 *local_50;
  
  local_b0 = "gml_Script_anon@380@gml_Object_oCultIntro_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x12;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  bVar8 = 0xff;
  uVar7 = 0xffffff;
  local_64 = 0xffffff;
  local_70 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x14;
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58320);
  if (((*(int *)((longlong)plVar3 + 0xc) == 2) && (*plVar3 != 0)) && (*(int *)(*plVar3 + 0x24) != 0)
     ) {
    iVar2 = 0;
    if ((*(int *)((longlong)plVar3 + 0xc) == 2) && (*plVar3 != 0)) {
      iVar2 = *(int *)(*plVar3 + 0x24);
    }
    local_d8 = 10;
    local_64 = 10;
    local_108 = (double)((longlong)iVar2 / 2);
    local_a8 = 0x18;
    local_fc = 10;
    local_100 = local_68;
    uStack_10c = 7;
    local_118 = 1;
    local_70 = local_108;
    FUN_1400462a0(&local_108,&local_118);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    dVar9 = local_108;
    if ((local_fc & 0xffffff) != 0) {
      dVar9 = (double)FUN_140e4b060(&local_108);
    }
    dVar9 = (double)FUN_140e78f00((longlong)dVar9);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_dc = 0;
    local_e8 = dVar9 * 2.0;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_a8 = 0x1a;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58320);
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58320);
    iVar2 = FUN_140e4a740(&local_e8);
    if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0)) {
      if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar4 != &local_a0) {
      local_118 = (undefined4)*plVar4;
      uStack_114 = *(undefined4 *)((longlong)plVar4 + 4);
      uStack_110 = (undefined4)plVar4[1];
      uStack_10c = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_118);
    }
    local_60 = &local_a0;
    local_fc = local_dc;
    local_100 = local_e0;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
      local_108 = local_e8;
    }
    else {
      FUN_1400419b0(&local_108,&local_e8);
    }
    uStack_10c = 7;
    local_118 = 1;
    FUN_1400460e0(&local_108,&local_118);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    iVar2 = FUN_140e4a740(&local_108);
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar5 != &local_90) {
      local_118 = (undefined4)*plVar5;
      uStack_114 = *(undefined4 *)((longlong)plVar5 + 4);
      uStack_110 = (undefined4)plVar5[1];
      uStack_10c = *(undefined4 *)((longlong)plVar5 + 0xc);
      if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      FUN_140041b80(&local_90,&local_118);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_58 = (double *)&local_90;
    uVar10 = CONCAT44(uVar11,DAT_1419fdca8);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar10,&local_60);
    uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar7 = 0xffffff;
    if (puVar6 != &local_c8) {
      local_118 = *(undefined4 *)puVar6;
      uStack_114 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_110 = *(undefined4 *)(puVar6 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
      FUN_140041b80(&local_c8,&local_118);
      uVar7 = uStack_bc;
    }
    bVar8 = (byte)uVar7;
    local_a8 = 0x1c;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if (plVar3 != &local_a0) {
      local_118 = (undefined4)*plVar3;
      uStack_114 = *(undefined4 *)((longlong)plVar3 + 4);
      uStack_110 = (undefined4)plVar3[1];
      uStack_10c = *(undefined4 *)((longlong)plVar3 + 0xc);
      if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_118);
    }
    local_60 = &local_a0;
    local_58 = &local_e8;
    local_118 = _DAT_1419e9bd0;
    uStack_114 = uRam00000001419e9bd4;
    uStack_110 = uRam00000001419e9bd8;
    uStack_10c = uRam00000001419e9bdc;
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_118);
    local_50 = local_80;
    FUN_140e634e0(param_1,param_2,&local_f8,3,CONCAT44(uVar11,DAT_1419fd808),&local_60);
    local_a8 = 0x1e;
    if (&local_c8 != param_3) {
      local_118 = (undefined4)local_c8;
      uStack_114 = local_c8._4_4_;
      uStack_110 = uStack_c0;
      uStack_10c = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_118);
    }
    uVar7 = local_d8;
  }
  else {
    local_a8 = 0x15;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = &DAT_bff0000000000000;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << (bVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

