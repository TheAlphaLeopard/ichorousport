// gml_Script_anon_1959_anon_1714_anon_555___InputVibrateSystem___InputVibrateSystem @ 0x1400eac00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1959_anon_1714_anon_555___InputVibrateSystem___InputVibrateSystem
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  double *pdVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 **ppuVar9;
  undefined4 uVar11;
  ulonglong uVar10;
  undefined4 **ppuVar12;
  double local_128;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  double local_c8;
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 *local_78;
  double *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_f0 = "gml_Script_anon@1008@anon@555@__InputVibrateSystem@__InputVibrateSystem";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x1d;
  _eh_vector_constructor_iterator_(local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x1f;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_1400eace8:
    local_108 = *(undefined4 *)puVar7;
    uStack_104 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_100 = *(undefined4 *)(puVar7 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_108);
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 != &local_b8) goto LAB_1400eace8;
  }
  local_68 = &local_b8;
  local_108 = _DAT_141dc6180;
  uStack_104 = uRam0000000141dc6184;
  uStack_100 = uRam0000000141dc6188;
  uStack_fc = uRam0000000141dc618c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_60 = local_a8;
  local_108 = _DAT_141dc6180;
  uStack_104 = uRam0000000141dc6184;
  uStack_100 = uRam0000000141dc6188;
  uStack_fc = uRam0000000141dc618c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_108);
  local_58 = local_98;
  ppuVar9 = &local_68;
  gml_Script_InputVibrateGetEventCount(param_1,param_2,&local_118,3,ppuVar9);
  uVar11 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
  local_e8 = 0x21;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419febc8);
  if (puVar4 != local_d8) {
    local_108 = *puVar4;
    uStack_104 = puVar4[1];
    uStack_100 = puVar4[2];
    uStack_fc = puVar4[3];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_108);
  }
  local_78 = local_d8;
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*param_5;
    if (pdVar5 == &local_c8) goto LAB_1400eae76;
  }
  local_108 = *(undefined4 *)pdVar5;
  uStack_104 = *(undefined4 *)((longlong)pdVar5 + 4);
  uStack_100 = *(undefined4 *)(pdVar5 + 1);
  uStack_fc = *(undefined4 *)((longlong)pdVar5 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_108);
LAB_1400eae76:
  local_70 = &local_c8;
  ppuVar12 = &local_78;
  uVar10 = CONCAT44(uVar11,DAT_141a01f38);
  FUN_140e634e0(param_1,param_2,&local_118,2,uVar10,ppuVar12);
  local_e8 = 0x23;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = 0.0;
  local_e8 = 0x24;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01f18);
  iVar8 = 0;
  if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
    iVar8 = *(int *)(*plVar6 + 0x24);
  }
  do {
    while( true ) {
      while( true ) {
        if (iVar8 < 1) {
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_88);
          }
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          _eh_vector_destructor_iterator_(local_d8,0x10,5,FUN_140041b30);
          DAT_141dc7a50 = (undefined8 *)local_f8;
          return param_3;
        }
        iVar8 = iVar8 + -1;
        local_e8 = 0x26;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01f18);
        iVar2 = FUN_140e4a740(&local_128);
        if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0))
        {
          if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        ppuVar12 = (undefined4 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(plVar6,DAT_1419fd5c8,0x80000000,&local_88,uVar10,ppuVar12);
        if (param_4 < 1) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)*param_5;
        }
        iVar2 = FUN_140e851f0(&local_88,puVar7,DAT_141955260,0);
        if (iVar2 != 0) break;
        local_e8 = 0x28;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        uVar11 = (undefined4)(uVar10 >> 0x20);
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01f18);
        if (puVar4 != local_d8) {
          local_108 = *puVar4;
          uStack_104 = puVar4[1];
          uStack_100 = puVar4[2];
          uStack_fc = puVar4[3];
          if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_108);
        }
        local_78 = local_d8;
        local_70 = &local_128;
        local_108 = _DAT_1419e1d00;
        uStack_104 = uRam00000001419e1d04;
        uStack_100 = uRam00000001419e1d08;
        uStack_fc = uRam00000001419e1d0c;
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_108);
        local_68 = &local_b8;
        ppuVar12 = &local_78;
        uVar10 = CONCAT44(uVar11,DAT_1419fd808);
        FUN_140e634e0(param_1,param_2,&local_118,3,uVar10,ppuVar12);
      }
      local_e8 = 0x2c;
      uVar3 = local_11c & 0xffffff;
      if (uVar3 != 0) break;
LAB_1400eb135:
      local_128 = local_128 + 1.0;
    }
    if (uVar3 == 1) {
      local_128 = (double)FUN_140e4b060(&local_128);
      local_11c = 0;
      goto LAB_1400eb135;
    }
    if (uVar3 == 7) {
      local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_128 = (double)((longlong)local_128 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_11c = 0;
        goto LAB_1400eb135;
      }
      FUN_140042910(&DAT_14172c3d8,&local_128,&local_128);
    }
  } while( true );
}

