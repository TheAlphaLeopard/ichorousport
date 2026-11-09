// gml_Script___InputPartyDeviceIsActive @ 0x1400bcf40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputPartyDeviceIsActive
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  longlong local_e0;
  uint uStack_d4;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [32];
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78 [2];
  undefined8 local_68 [5];
  
  local_f0 = "gml_Script___InputPartyDeviceGetNewActivity";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 9;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_d4 = 0xffffff;
  local_e0 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_11c = 0;
  local_128 = 0;
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0xb;
  local_138 = _DAT_1419df7a0;
  uStack_134 = uRam00000001419df7a4;
  uStack_130 = uRam00000001419df7a8;
  uStack_12c = uRam00000001419df7ac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_138);
  local_c0 = &local_88;
  plVar4 = (longlong *)
           gml_Script_InputDeviceGetAnyGamepadConnected(param_1,param_2,&local_128,1,&local_c0);
  lVar7 = 0;
  uVar8 = 0xffffff;
  if (plVar4 != &local_e0) {
    local_138 = (undefined4)*plVar4;
    uStack_134 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_130 = (undefined4)plVar4[1];
    uStack_12c = *(undefined4 *)((longlong)plVar4 + 0xc);
    FUN_140041b80(&local_e0,&local_138);
    lVar7 = local_e0;
    uVar8 = uStack_d4;
  }
  local_e8 = 0xc;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_158 = 0.0;
  iVar9 = 0;
  if ((uVar8 == 2) && (lVar7 != 0)) {
    iVar9 = *(int *)(lVar7 + 0x24);
  }
  if (0 < iVar9) {
    do {
      iVar9 = iVar9 + -1;
      local_e8 = 0xf;
      iVar2 = FUN_140e4a740(&local_158);
      plVar4 = (longlong *)0x0;
      if (((uVar8 & 0xffffff) == 2) && (lVar7 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar7 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar7 + 0x24));
        }
        else {
          plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar7 + 8));
        }
        if (plVar4 != &local_148) goto LAB_1400bd178;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar4 = &local_e0;
LAB_1400bd178:
        local_138 = (undefined4)*plVar4;
        uStack_134 = *(undefined4 *)((longlong)plVar4 + 4);
        uStack_130 = (undefined4)plVar4[1];
        uStack_12c = *(undefined4 *)((longlong)plVar4 + 0xc);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_138);
      }
      local_e8 = 0x11;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      local_d0 = &local_148;
      uVar5 = gml_Script_InputDeviceIsConnected(param_1,param_2,&local_128,1,&local_d0);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 != '\0') {
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        local_c8 = &local_148;
        uVar5 = gml_Script_anon_715_anon_610___InputPartySystem___InputPartySystem
                          (param_1,param_2,&local_108,1,&local_c8);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 != '\0') {
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          local_118 = 0;
          local_110 = 0;
          local_10c = 5;
          local_c0 = &local_148;
          if (param_4 < 1) {
            puVar6 = &DAT_1419df7b0;
LAB_1400bd2cf:
            local_138 = *(undefined4 *)puVar6;
            uStack_134 = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_130 = *(undefined4 *)(puVar6 + 1);
            uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)local_78[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_78);
            }
            FUN_140041b80(local_78,&local_138);
          }
          else {
            puVar6 = (undefined8 *)*param_5;
            if (puVar6 != local_78) goto LAB_1400bd2cf;
          }
          local_b8 = local_78;
          if (param_4 < 2) {
            puVar6 = &DAT_1419df7b0;
LAB_1400bd31f:
            local_138 = *(undefined4 *)puVar6;
            uStack_134 = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_130 = *(undefined4 *)(puVar6 + 1);
            uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)local_68[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_68);
            }
            FUN_140041b80(local_68,&local_138);
          }
          else {
            puVar6 = (undefined8 *)param_5[1];
            if (puVar6 != local_68) goto LAB_1400bd31f;
          }
          local_b0 = local_68;
          uVar5 = gml_Script_InputDeviceEnumerate(param_1,param_2,&local_118,3,&local_c0);
          cVar1 = FUN_140e491e0(uVar5);
          if (cVar1 == '\0') {
            local_e8 = 0x15;
            if (&local_148 != param_3) {
              local_138 = (undefined4)local_148;
              uStack_134 = local_148._4_4_;
              uStack_130 = uStack_140;
              uStack_12c = uStack_13c;
              if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(param_3);
              }
              FUN_140041b80(param_3,&local_138);
            }
            goto LAB_1400bd427;
          }
        }
      }
      local_e8 = 0x18;
      uVar3 = local_14c & 0xffffff;
      if (uVar3 == 0) {
LAB_1400bd3e2:
        local_158 = local_158 + 1.0;
      }
      else {
        if (uVar3 == 1) {
          local_158 = (double)FUN_140e4b060(&local_158);
          local_14c = 0;
          goto LAB_1400bd3e2;
        }
        if (uVar3 == 7) {
          local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + 1);
        }
        else if (uVar3 == 10) {
          local_158 = (double)((longlong)local_158 + 1);
        }
        else {
          if (uVar3 == 0xd) {
            local_14c = 0;
            goto LAB_1400bd3e2;
          }
          FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
        }
      }
    } while (0 < iVar9);
  }
  local_e8 = 0x1b;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = &DAT_bff0000000000000;
LAB_1400bd427:
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

