// gml_Script_anon_1112_gml_Object_oRunManager_Create_0 @ 0x140d43b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1112_gml_Object_oRunManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint local_res20;
  undefined4 uVar11;
  double local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  double local_b0;
  uint uStack_a4;
  double *local_a0;
  double *local_98;
  double local_90;
  undefined4 local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  
  local_c0 = "gml_Script_anon@570@gml_Object_oRunManager_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x25;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0.0;
  local_res20 = 0xffffff;
  uStack_a4 = 0xffffff;
  local_b0 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_fc = 0;
  uVar9 = 0;
  uVar10 = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x26;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  pdVar4 = (double *)FUN_14018a720(local_70,param_5,10);
  if (pdVar4 != &local_e8) {
    local_f8 = *pdVar4;
    dStack_f0 = pdVar4[1];
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_f8);
  }
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  local_b8 = 0x27;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56f8);
  dVar8 = 0.0;
  if (pdVar4 != &local_b0) {
    local_f8 = *pdVar4;
    dStack_f0 = pdVar4[1];
    FUN_140041b80(&local_b0,&local_f8);
    local_res20 = uStack_a4;
    dVar8 = local_b0;
  }
  local_b8 = 0x28;
  pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f56c8);
  FUN_140e609c0(param_1);
  if (&local_e8 != pdVar4) {
    dStack_f0 = (double)CONCAT44(uStack_dc,uStack_e0);
    local_f8 = local_e8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar4);
    }
    FUN_140041b80(pdVar4,&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 0x29;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f56f8);
  local_a0 = &local_e8;
  local_f8 = (double)_DAT_1419ed8e0;
  dStack_f0 = (double)lRam00000001419ed8e8;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_f8);
  local_98 = (double *)local_80;
  FUN_140e609c0(param_1);
  plVar6 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_108,2,CONCAT44(uVar11,DAT_1419fd218),&local_a0);
  if (plVar6 != plVar5) {
    local_f8 = (double)*plVar6;
    dStack_f0 = (double)plVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar5);
    }
    FUN_140041b80(plVar5,&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 0x2a;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  iVar3 = 0;
  if ((local_res20 == 2) && (dVar8 != 0.0)) {
    iVar3 = *(int *)((longlong)dVar8 + 0x24);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_84 = 0;
  local_90 = (double)iVar3;
  local_a0 = &local_90;
  local_98 = &local_e8;
  plVar5 = (longlong *)FUN_140e79230(&local_108,2,&local_a0);
  if (plVar5 != &local_d8) {
    local_f8 = (double)*plVar5;
    dStack_f0 = (double)plVar5[1];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
  }
  local_b8 = 0x2b;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0.0;
  bVar1 = true;
  do {
    if (!bVar1) {
      local_b8 = 0x2b;
      uVar2 = local_10c & 0xffffff;
      if (uVar2 == 0) {
LAB_140d43f40:
        local_118 = (double)CONCAT44(uVar10,uVar9) + 1.0;
      }
      else if (uVar2 == 1) {
        local_118 = (double)FUN_140e4b060(&local_118);
        local_118 = local_118 + 1.0;
        local_10c = 0;
      }
      else if (uVar2 == 7) {
        local_118 = (double)CONCAT44(local_118._4_4_,local_118._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_118 = (double)((longlong)local_118 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_10c = 0;
          goto LAB_140d43f40;
        }
        FUN_140042910(&DAT_14172c3d8,&local_118,&local_118);
      }
    }
    bVar1 = false;
    iVar3 = FUN_140e851f0(&local_118,&local_d8,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      _eh_vector_destructor_iterator_(&local_90,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_c8;
      return param_3;
    }
    local_b8 = 0x2c;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f56f8);
    FUN_140e609c0(param_1);
    iVar3 = FUN_140e4a740(&local_118);
    plVar5 = (longlong *)0x0;
    if (((local_res20 & 0xffffff) == 2) && (dVar8 != 0.0)) {
      if ((iVar3 < 0) || (*(int *)((longlong)dVar8 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)dVar8 + 0x24));
      }
      else {
        plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar8 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar5 = (longlong *)&local_b0;
    }
    uVar9 = FUN_140e4a740(&local_118);
    plVar6 = (longlong *)FUN_140e48e40(puVar7,uVar9);
    FUN_140e609c0(*(undefined8 *)*puVar7);
    if (plVar5 != plVar6) {
      local_f8 = (double)*plVar5;
      dStack_f0 = (double)plVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_f8);
    }
    FUN_140e60910(2);
    uVar9 = SUB84(local_118,0);
    uVar10 = (undefined4)((ulonglong)local_118 >> 0x20);
  } while( true );
}

