// gml_Script___InputTriggerEffectStop @ 0x1400dea80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputTriggerEffectStop
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  double local_e0 [2];
  undefined8 local_d0 [2];
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  uint local_80 [2];
  undefined8 *local_78;
  undefined1 local_70 [16];
  longlong local_60;
  
  local_f0 = "gml_Script___InputTriggerEffectReapply";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 5;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_80,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_e0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc8d0) &&
     (_Init_thread_header(&DAT_141ddc8d0), DAT_141ddc8d0 == -1)) {
    DAT_141ddc8d8 = (longlong *)FUN_140e63aa0(DAT_141a03e18);
    _Init_thread_footer(&DAT_141ddc8d0);
  }
  local_e8 = 5;
  puVar9 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_80[0];
  if ((int)local_80[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_78;
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_e8 = 5;
    if ((int)local_80[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_78;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc066 == '\0') {
    FUN_140e64380(DAT_141ddc8d8,"gml_Script___InputTriggerEffectReapply");
    FUN_140e64380(local_res8,"gml_Script___InputTriggerEffectReapply");
  }
  local_e8 = 7;
  if (DAT_141ddc066 == '\0') {
    DAT_141ddc066 = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddc8d8 + 0x10))(DAT_141ddc8d8,DAT_141a026b8);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar10 = 0;
    uVar6 = gml_Script___InputVerbGroupsConfig(local_res8,local_res10,&local_128,0,0);
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_a8,uVar10 & 0xffffffffffffff00,
                  in_stack_fffffffffffffed0 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141ddc8d8);
    if (&local_a8 != puVar5) {
      local_108 = local_a8;
      uStack_100 = uStack_a0;
      uStack_fc = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_108);
    }
    FUN_140e60910(1);
  }
  local_e8 = 9;
  if ((int)local_80[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_78;
  }
  uStack_fc = 0;
  local_108 = 0xc008000000000000;
  iVar3 = FUN_140e851f0(puVar5,&local_108,DAT_141955260,0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar3 != 0) {
    local_e8 = 0x15;
    plVar7 = (longlong *)(**(code **)(*DAT_141ddc8d8 + 8))(DAT_141ddc8d8,DAT_141a026b8);
    if (0 < (int)local_80[0]) {
      puVar9 = (undefined8 *)*local_78;
    }
    iVar3 = FUN_140e4a740(puVar9);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    iVar3 = FUN_140e63cb0(local_70,&local_res8,&local_res10,plVar7);
    if (0 < iVar3) {
      do {
        local_e8 = 0x17;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03d88);
        cVar2 = FUN_140e491e0(uVar6);
        if (cVar2 != '\0') {
          local_e8 = 0x17;
          goto LAB_1400df21f;
        }
        local_e8 = 0x19;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03df8);
        puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a03e08);
        local_108 = CONCAT44(uRam00000001419e1bb4,_DAT_1419e1bb0);
        uStack_100 = uRam00000001419e1bb8;
        uStack_fc = uRam00000001419e1bbc;
        if ((1 << ((byte)local_e0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e0);
        }
        FUN_140041b80(local_e0,&local_108);
        local_98 = local_e0;
        if (puVar9 != local_d0) {
          local_108 = *puVar9;
          uStack_100 = *(undefined4 *)(puVar9 + 1);
          uStack_fc = *(undefined4 *)((longlong)puVar9 + 0xc);
          if ((1 << ((byte)local_d0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d0);
          }
          FUN_140041b80(local_d0,&local_108);
        }
        local_90 = local_d0;
        local_108 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_100 = uRam00000001419df7a8;
        uStack_fc = uRam00000001419df7ac;
        if ((1 << (local_c0[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c0);
        }
        FUN_140041b80(local_c0,&local_108);
        local_88 = local_c0;
        FUN_140e63610(local_res8,local_res10,&local_128,3,uVar6,&local_98);
        local_e8 = 0x1a;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a03d78);
        local_108 = CONCAT44(uRam00000001419e1ba4,_DAT_1419e1ba0);
        uStack_100 = uRam00000001419e1ba8;
        uStack_fc = uRam00000001419e1bac;
        if ((1 << ((byte)local_e0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e0);
        }
        FUN_140041b80(local_e0,&local_108);
        local_98 = local_e0;
        if (puVar9 != local_d0) {
          local_108 = *puVar9;
          uStack_100 = *(undefined4 *)(puVar9 + 1);
          uStack_fc = *(undefined4 *)((longlong)puVar9 + 0xc);
          if ((1 << ((byte)local_d0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d0);
          }
          FUN_140041b80(local_d0,&local_108);
        }
        local_90 = local_d0;
        local_108 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_100 = uRam00000001419df7a8;
        uStack_fc = uRam00000001419df7ac;
        if ((1 << (local_c0[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c0);
        }
        FUN_140041b80(local_c0,&local_108);
        local_88 = local_c0;
        FUN_140e63610(local_res8,local_res10,&local_128,3,uVar6,&local_98);
        cVar2 = FUN_140e643f0(local_70,&local_res8,&local_res10);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(local_70,&local_res8,&local_res10);
LAB_1400df21f:
    if (local_60 != 0) {
      FUN_140e4cd60();
      local_60 = 0;
    }
    goto LAB_1400df238;
  }
  local_e8 = 0xb;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0.0;
  local_e8 = 0xe;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_98 = &local_118;
  gml_Script___InputTriggerEffectStop(local_res8,local_res10,&local_128,1,&local_98);
  local_e8 = 0xf;
  uVar4 = local_10c & 0xffffff;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      local_118 = (double)FUN_140e4b060(&local_118);
      local_10c = 0;
    }
    else {
      if (uVar4 == 7) {
        local_118 = (double)CONCAT44(local_118._4_4_,local_118._0_4_ + 1);
        local_e8 = 0x12;
        goto LAB_1400df238;
      }
      if (uVar4 == 10) {
        local_118 = (double)((longlong)local_118 + 1);
        local_e8 = 0x12;
        goto LAB_1400df238;
      }
      if (uVar4 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_118,&local_118);
        local_e8 = 0x12;
        goto LAB_1400df238;
      }
      local_10c = 0;
    }
  }
  local_118 = local_118 + 1.0;
  local_e8 = 0x12;
LAB_1400df238:
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_e0,0x10,3,FUN_140041b30);
  if (0 < (int)local_80[0]) {
    puVar9 = local_78;
    do {
      puVar5 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_78);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

