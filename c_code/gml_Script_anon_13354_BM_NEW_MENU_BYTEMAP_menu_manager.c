// gml_Script_anon_13354_BM_NEW_MENU_BYTEMAP_menu_manager @ 0x1402554b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_13354_BM_NEW_MENU_BYTEMAP_menu_manager
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  double *pdVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  double *pdVar10;
  double local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  double local_118;
  uint uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  longlong local_a0;
  int local_94;
  double local_90;
  ulonglong uStack_88;
  double local_78;
  double dStack_70;
  uint local_68 [2];
  undefined8 *local_60;
  
  local_100 = "gml_Script_anon@11749@BM_NEW_MENU@BYTEMAP_menu_manager";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x144;
  FUN_140041df0(local_68,param_4,1,param_5);
  uStack_11c = 0xffffff;
  local_128 = 0.0;
  local_94 = 0xffffff;
  local_a0 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = (undefined1 *)0x0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x144;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_60;
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if ((iVar3 == 0) &&
     ((local_f8 = 0x144, (int)local_68[0] < 1 ||
      (puVar8 = (undefined8 *)*local_60, puVar8 != (undefined8 *)&DAT_141dce048)))) {
    local_90 = _DAT_141dce048;
    uStack_88 = uRam0000000141dce050;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_90);
  }
  local_f8 = 0x145;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = 0;
  local_128 = 0.0;
  bVar2 = true;
  do {
    pdVar10 = (double *)0x0;
    if (!bVar2) {
      local_f8 = 0x145;
      uVar4 = uStack_11c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_128 = (double)((longlong)local_128 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              uStack_11c = 0;
              goto LAB_1402556c1;
            }
            FUN_140042910(&DAT_14172c3d8,&local_128,&local_128);
          }
          goto LAB_1402556cb;
        }
        local_128 = (double)FUN_140e4b060(&local_128);
        uStack_11c = 0;
      }
LAB_1402556c1:
      local_128 = local_128 + 1.0;
    }
LAB_1402556cb:
    bVar2 = false;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
    FUN_140e87440(uVar5,DAT_141a465e8,0x80000000,&local_a0,0,0);
    pdVar7 = pdVar10;
    if ((local_94 == 2) && (local_a0 != 0)) {
      pdVar7 = (double *)(ulonglong)*(uint *)(local_a0 + 0x24);
    }
    uStack_88 = uStack_88 & 0xffffffff;
    local_90 = (double)(int)pdVar7;
    iVar3 = FUN_140e851f0(&local_128,&local_90,DAT_141955260,1);
    if ((1 << ((byte)(uStack_88 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      local_f8 = 0x156;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 6;
      *param_3 = param_1;
      uVar5 = FUN_140e5c910();
      FUN_140e42c10(uVar5,param_1);
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if (0 < (int)local_68[0]) {
        puVar8 = local_60;
        do {
          puVar6 = (undefined8 *)*puVar8;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 1) = 0;
          *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
          puVar8 = puVar8 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      FUN_140e4cd60(local_60);
      DAT_141dc7a50 = (undefined8 *)local_108;
      return param_3;
    }
    local_f8 = 0x146;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
    FUN_140e87440(uVar5,DAT_141a465e8,0x80000000,&local_118,0,0);
    iVar3 = FUN_140e4a740(&local_128);
    if (((uStack_10c & 0xffffff) == 2) && (local_118 != 0.0)) {
      if ((iVar3 < 0) || (*(int *)((longlong)local_118 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)((longlong)local_118 + 0x24));
        pdVar7 = pdVar10;
      }
      else {
        pdVar7 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)local_118 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar7 = &local_118;
    }
    if (((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 2) && (dVar1 = *pdVar7, dVar1 != 0.0)) {
      if (*(int *)((longlong)dVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        pdVar7 = pdVar10;
      }
      else {
        pdVar7 = *(double **)((longlong)dVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar7 != &local_118) {
      local_78 = *pdVar7;
      dStack_70 = pdVar7[1];
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_78);
    }
    if ((int)local_68[0] < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*local_60;
    }
    iVar3 = FUN_140e851f0(&local_118,puVar8,DAT_141955260,0);
    if (iVar3 == 0) {
      local_f8 = 0x14d;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      local_b4 = 0;
      local_c0 = &DAT_bff0000000000000;
      FUN_140e87930(uVar5,DAT_141a46af8,0x80000000,&local_c0);
      local_f8 = 0x14e;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
      dStack_70 = (double)CONCAT44(uStack_11c,uStack_120);
      local_78 = local_128;
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      FUN_140041b80(&local_b0,&local_78);
      FUN_140e87930(uVar5,DAT_141a46948,0x80000000,&local_b0);
      local_f8 = 0x14f;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      local_c4 = 0;
      local_d0 = 0x3ff0000000000000;
      FUN_140e87930(uVar5,DAT_141a46778,0x80000000,&local_d0);
      local_f8 = 0x150;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      local_d4 = 0;
      local_e0 = 0;
      FUN_140e87930(uVar5,DAT_141a46ba8,0x80000000,&local_e0);
      local_f8 = 0x151;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      local_e4 = 0;
      local_f0 = 0;
      FUN_140e87930(uVar5,DAT_141a464f8,0x80000000,&local_f0);
    }
    else {
      local_f8 = 0x152;
    }
  } while( true );
}

