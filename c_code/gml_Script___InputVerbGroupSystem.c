// gml_Script___InputVerbGroupSystem @ 0x1400e29d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputVerbGroupSystem
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  longlong **in_stack_fffffffffffffe60;
  double local_198;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  longlong local_160;
  undefined4 local_154;
  ulonglong local_150;
  undefined4 local_144;
  ulonglong local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  longlong local_108;
  longlong lStack_100;
  undefined4 local_f8 [3];
  undefined4 local_ec;
  longlong local_e8;
  undefined4 local_dc;
  undefined1 local_c8 [12];
  undefined4 local_bc;
  longlong *local_88;
  double *local_80;
  undefined1 *local_78;
  
  local_170 = "gml_Script_anon@3511@anon@1619@__InputVerbGroupSystem@__InputVerbGroupSystem";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x49;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc8fc) &&
     (_Init_thread_header(&DAT_141ddc8fc), DAT_141ddc8fc == -1)) {
    DAT_141ddc900 = (longlong *)FUN_140e63aa0(DAT_141a03ff8);
    _Init_thread_footer(&DAT_141ddc8fc);
  }
  if (DAT_141ddc06b == '\0') {
    FUN_140e64380(DAT_141ddc900,
                  "gml_Script_anon@3511@anon@1619@__InputVerbGroupSystem@__InputVerbGroupSystem");
    FUN_140e64380(param_1,
                  "gml_Script_anon@3511@anon@1619@__InputVerbGroupSystem@__InputVerbGroupSystem");
  }
  local_168 = 0x4b;
  if (DAT_141ddc06b == '\0') {
    DAT_141ddc06b = '\x01';
    puVar5 = (ulonglong *)(**(code **)(*DAT_141ddc900 + 0x10))(DAT_141ddc900,DAT_141a04078);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar12 = 0;
    uVar6 = gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR
                      (param_1,param_2,&local_188,0,0);
    in_stack_fffffffffffffe60 =
         (longlong **)((ulonglong)in_stack_fffffffffffffe60 & 0xffffffffffffff00);
    pcVar11 = (code *)(uVar12 & 0xffffffffffffff00);
    FUN_140e87440(uVar6,DAT_141a03fc8,0x80000000,&local_128,pcVar11,in_stack_fffffffffffffe60);
    FUN_140e609c0(DAT_141ddc900);
    if (&local_128 != puVar5) {
      uStack_130 = CONCAT44(uStack_11c,uStack_120);
      local_138 = local_128;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_138);
    }
    FUN_140e60910(1);
  }
  local_168 = 0x4e;
  puVar5 = (ulonglong *)(**(code **)(*DAT_141ddc900 + 8))(DAT_141ddc900,DAT_141a04078);
  if (param_4 < 4) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)param_5[3];
  }
  iVar2 = FUN_140e4a740(puVar9);
  if (((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 2) && (uVar12 = *puVar5, uVar12 != 0)) {
    if ((iVar2 < 0) || (*(int *)(uVar12 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(uVar12 + 0x24));
      puVar5 = (ulonglong *)0x0;
    }
    else {
      puVar5 = (ulonglong *)((longlong)iVar2 * 0x10 + *(longlong *)(uVar12 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (puVar5 != &local_150) {
    local_138 = *puVar5;
    uStack_130 = puVar5[1];
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_138);
  }
  local_168 = 0x51;
  local_ec = 7;
  local_f8[0] = 0;
  iVar2 = FUN_140e851f0(&local_150,local_f8,DAT_141955260,0);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  if (iVar2 == 0) {
    local_168 = 0x51;
  }
  else {
    local_168 = 0x53;
    if (param_4 < 1) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)*param_5;
    }
    iVar2 = 0;
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar2 = *(int *)(*plVar7 + 0x24);
    }
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_18c = 0;
    local_198 = (double)(iVar2 + -1);
    local_168 = 0x54;
    if (param_4 < 1) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)*param_5;
    }
    iVar2 = 0;
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar2 = *(int *)(*plVar7 + 0x24);
    }
    while (0 < iVar2) {
      iVar2 = iVar2 + -1;
      local_168 = 0x56;
      plVar7 = (longlong *)(**(code **)(*DAT_141ddc900 + 8))(DAT_141ddc900,DAT_141a04078);
      iVar3 = FUN_140e4a740(&local_198);
      if (param_4 < 1) {
        plVar10 = &DAT_1419df7b0;
      }
      else {
        plVar10 = (longlong *)*param_5;
      }
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar3,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      in_stack_fffffffffffffe60 =
           (longlong **)((ulonglong)in_stack_fffffffffffffe60 & 0xffffffffffffff00);
      pcVar11 = (code *)((ulonglong)pcVar11 & 0xffffffffffffff00);
      FUN_140e87440(plVar10,DAT_141a04028,0x80000000,&local_118,pcVar11,in_stack_fffffffffffffe60);
      iVar3 = FUN_140e4a740(&local_118);
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
      if (plVar7 != &local_160) {
        local_108 = *plVar7;
        lStack_100 = plVar7[1];
        if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_160);
        }
        FUN_140041b80(&local_160,&local_108);
      }
      local_168 = 0x59;
      uStack_130 = CONCAT44(7,(undefined4)uStack_130);
      local_138 = local_138 & 0xffffffff00000000;
      iVar3 = FUN_140e851f0(&local_160,&local_138,DAT_141955260,0);
      if ((1 << ((byte)(uStack_130 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (iVar3 != 0) {
        local_168 = 0x5c;
        uVar12 = FUN_140e4a8b0(&local_150);
        uVar8 = FUN_140e4a8b0(&local_160);
        if ((longlong)(uVar12 & uVar8) < 1) {
          local_168 = 0x5e;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          uVar13 = (undefined4)((ulonglong)pcVar11 >> 0x20);
          local_188 = 0;
          local_180 = 0;
          local_17c = 5;
          if (param_4 < 1) {
            plVar7 = &DAT_1419df7b0;
LAB_1400e2ffc:
            local_108 = *plVar7;
            lStack_100 = plVar7[1];
            if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e8);
            }
            FUN_140041b80(&local_e8,&local_108);
          }
          else {
            plVar7 = (longlong *)*param_5;
            if (plVar7 != &local_e8) goto LAB_1400e2ffc;
          }
          local_88 = &local_e8;
          local_80 = &local_198;
          local_108 = _DAT_1419e1c90;
          lStack_100 = lRam00000001419e1c98;
          if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_108);
          in_stack_fffffffffffffe60 = &local_88;
          pcVar11 = (code *)CONCAT44(uVar13,DAT_1419fd808);
          local_78 = local_c8;
          FUN_140e634e0(param_1,param_2,&local_188,3,pcVar11,in_stack_fffffffffffffe60);
        }
      }
      local_168 = 0x62;
      uVar4 = local_18c & 0xffffff;
      if (uVar4 == 0) {
LAB_1400e30f1:
        local_198 = local_198 + -1.0;
      }
      else if (uVar4 == 1) {
        local_198 = (double)FUN_140e4b060(&local_198);
        local_198 = local_198 - 1.0;
        local_18c = 0;
      }
      else if (uVar4 == 7) {
        local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + -1);
      }
      else if (uVar4 == 10) {
        local_198 = (double)((longlong)local_198 + -1);
      }
      else {
        if (uVar4 == 0xd) {
          local_18c = 0;
          goto LAB_1400e30f1;
        }
        FUN_140042910(&DAT_14172c450,&local_198,&local_198);
      }
    }
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

