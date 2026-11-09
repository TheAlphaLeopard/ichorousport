// gml_Script_anon_1741_anon_376___InputMotionSystem___InputMotionSystem @ 0x1400bb690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1741_anon_376___InputMotionSystem___InputMotionSystem
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined4 **ppuVar10;
  double local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined4 local_a8 [3];
  undefined4 local_9c;
  undefined4 local_88 [3];
  undefined4 local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined4 *local_68;
  double *local_60;
  undefined4 *local_58;
  undefined8 *local_50;
  
  local_d0 = "gml_Script_anon@1033@anon@376@__InputMotionSystem@__InputMotionSystem";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x1c;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x1e;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419febc8);
  if (puVar4 != local_88) {
    local_e8 = *puVar4;
    uStack_e4 = puVar4[1];
    uStack_e0 = puVar4[2];
    uStack_dc = puVar4[3];
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_e8);
  }
  local_58 = local_88;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 == &local_78) goto LAB_1400bb7eb;
  }
  local_e8 = *(undefined4 *)puVar6;
  uStack_e4 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_e0 = *(undefined4 *)(puVar6 + 1);
  uStack_dc = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_e8);
LAB_1400bb7eb:
  local_50 = &local_78;
  ppuVar10 = &local_58;
  uVar8 = CONCAT44(uVar9,DAT_141a01f38);
  FUN_140e634e0(param_1,param_2,&local_f8,2,uVar8,ppuVar10);
  local_c8 = 0x20;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0.0;
  local_c8 = 0x21;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01f18);
  iVar7 = 0;
  if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
    iVar7 = *(int *)(*plVar5 + 0x24);
  }
  do {
    while( true ) {
      while( true ) {
        if (iVar7 < 1) {
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c0);
          }
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
          DAT_141dc7a50 = (undefined8 *)local_d8;
          return param_3;
        }
        iVar7 = iVar7 + -1;
        local_c8 = 0x23;
        plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01f18);
        iVar2 = FUN_140e4a740(&local_108);
        if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0))
        {
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
        ppuVar10 = (undefined4 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(plVar5,DAT_1419fd5c8,0x80000000,&local_c0,uVar8,ppuVar10);
        if (param_4 < 1) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)*param_5;
        }
        iVar2 = FUN_140e851f0(&local_c0,puVar6,DAT_141955260,0);
        if (iVar2 != 0) break;
        local_c8 = 0x25;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        uVar9 = (undefined4)(uVar8 >> 0x20);
        local_f8 = 0;
        local_f0 = 0;
        local_ec = 5;
        puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01f18);
        if (puVar4 != local_a8) {
          local_e8 = *puVar4;
          uStack_e4 = puVar4[1];
          uStack_e0 = puVar4[2];
          uStack_dc = puVar4[3];
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          FUN_140041b80(local_a8,&local_e8);
        }
        local_68 = local_a8;
        local_60 = &local_108;
        local_e8 = _DAT_1419e18f0;
        uStack_e4 = uRam00000001419e18f4;
        uStack_e0 = uRam00000001419e18f8;
        uStack_dc = uRam00000001419e18fc;
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_e8);
        local_58 = local_88;
        ppuVar10 = &local_68;
        uVar8 = CONCAT44(uVar9,DAT_1419fd808);
        FUN_140e634e0(param_1,param_2,&local_f8,3,uVar8,ppuVar10);
      }
      local_c8 = 0x29;
      uVar3 = local_fc & 0xffffff;
      if (uVar3 != 0) break;
LAB_1400bbaa2:
      local_108 = local_108 + 1.0;
    }
    if (uVar3 == 1) {
      local_108 = (double)FUN_140e4b060(&local_108);
      local_fc = 0;
      goto LAB_1400bbaa2;
    }
    if (uVar3 == 7) {
      local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_108 = (double)((longlong)local_108 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_fc = 0;
        goto LAB_1400bbaa2;
      }
      FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
    }
  } while( true );
}

