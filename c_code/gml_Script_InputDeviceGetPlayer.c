// gml_Script_InputDeviceGetPlayer @ 0x140320720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputDeviceGetPlayer
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint local_res20;
  undefined4 uVar12;
  undefined8 uVar11;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138;
  byte local_12c;
  longlong local_128;
  byte local_11c;
  longlong local_118 [2];
  longlong local_108 [2];
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  uint uStack_74;
  uint local_70 [2];
  undefined8 *local_68;
  
  local_e0 = "gml_Script_InputDeviceGetNewActivityOnVerb";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 9;
  FUN_140041df0(local_70,param_4,2,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_res20 = 0xffffff;
  uStack_74 = 0xffffff;
  lVar10 = 0;
  local_80 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_15c = 0;
  local_168 = 0;
  local_13c = 0;
  local_148 = 0;
  local_84 = 0;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 9;
  uVar9 = (ulonglong)local_70[0];
  if ((int)local_70[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_68[1];
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_d8 = 9;
    if ((int)local_70[0] < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_68[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  local_d8 = 4;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_70[0] < 2) {
    plVar7 = &DAT_1419df7b0;
LAB_1403208e1:
    local_178 = *plVar7;
    uStack_170 = (undefined4)plVar7[1];
    uStack_16c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
  }
  else {
    plVar7 = (longlong *)local_68[1];
    if (plVar7 != &local_138) goto LAB_1403208e1;
  }
  local_b8 = &local_138;
  uVar11 = CONCAT44(uVar12,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar11,&local_b8);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_d8 = 9;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    local_90 = 0;
    local_88 = 0;
    local_84 = 5;
    if ((int)local_70[0] < 2) {
      plVar7 = &DAT_1419df7b0;
LAB_1403209ce:
      local_178 = *plVar7;
      uStack_170 = (undefined4)plVar7[1];
      uStack_16c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    else {
      plVar7 = (longlong *)local_68[1];
      if (plVar7 != &local_128) goto LAB_1403209ce;
    }
    local_b0 = &local_128;
    local_178 = CONCAT44(uRam0000000141dd01fc,_DAT_141dd01f8);
    uStack_170 = uRam0000000141dd0200;
    uStack_16c = DAT_141dd0204;
    if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_178);
    local_a8 = local_118;
    plVar7 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_90,1,CONCAT44(uVar12,DAT_1419fdc58),&local_b0);
    if (plVar7 != local_108) {
      local_178 = *plVar7;
      uStack_170 = (undefined4)plVar7[1];
      uStack_16c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_178);
    }
    local_a0 = local_108;
    local_178 = CONCAT44(uRam0000000141dd01cc,_DAT_141dd01c8);
    uStack_170 = uRam0000000141dd01d0;
    uStack_16c = DAT_141dd01d4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_178);
    local_98 = local_f8;
    FUN_14008e020(param_1,param_2,&local_148,3,&local_a8);
  }
  local_d8 = 0xe;
  if ((int)local_70[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_68[1];
  }
  uStack_16c = 0;
  local_178 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar8,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (uVar4 < 0x80000000) {
    local_d8 = 0x12;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = CONCAT44(uRam0000000141dd020c,_DAT_141dd0208);
    uStack_170 = uRam0000000141dd0210;
    uStack_16c = DAT_141dd0214;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_b8 = &local_138;
    if ((int)local_70[0] < 2) {
      plVar7 = &DAT_1419df7b0;
LAB_140320c0c:
      local_178 = *plVar7;
      uStack_170 = (undefined4)plVar7[1];
      uStack_16c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    else {
      plVar7 = (longlong *)local_68[1];
      if (plVar7 != &local_128) goto LAB_140320c0c;
    }
    local_b0 = &local_128;
    local_178 = CONCAT44(uRam0000000141dd021c,_DAT_141dd0218);
    uStack_170 = uRam0000000141dd0220;
    uStack_16c = DAT_141dd0224;
    if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_178);
    local_a8 = local_118;
    local_178 = CONCAT44(uRam00000001419e3fe4,_DAT_1419e3fe0);
    uStack_170 = uRam00000001419e3fe8;
    uStack_16c = uRam00000001419e3fec;
    if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_178);
    local_a0 = local_108;
    local_178 = CONCAT44(uRam0000000141dd01ec,_DAT_141dd01e8);
    uStack_170 = uRam0000000141dd01f0;
    uStack_16c = DAT_141dd01f4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_178);
    local_98 = local_f8;
    FUN_14008e020(param_1,param_2,&local_168,5,&local_b8);
  }
  local_d8 = 0x1e;
  if ((int)local_70[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_68[1];
  }
  uStack_16c = 0;
  local_178 = 0;
  iVar3 = FUN_140e851f0(puVar8,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140320eb0;
  local_d8 = 0x1e;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_178 = CONCAT44(uRam0000000141dd020c,_DAT_141dd0208);
  uStack_170 = uRam0000000141dd0210;
  uStack_16c = DAT_141dd0214;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_178);
  local_b8 = &local_138;
  if ((int)local_70[0] < 2) {
    plVar7 = &DAT_1419df7b0;
LAB_140320e19:
    local_178 = *plVar7;
    uStack_170 = (undefined4)plVar7[1];
    uStack_16c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  else {
    plVar7 = (longlong *)local_68[1];
    if (plVar7 != &local_128) goto LAB_140320e19;
  }
  local_b0 = &local_128;
  local_178 = CONCAT44(uRam0000000141dd01dc,_DAT_141dd01d8);
  uStack_170 = uRam0000000141dd01e0;
  uStack_16c = DAT_141dd01e4;
  if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_178);
  local_a8 = local_118;
  FUN_14008e020(param_1,param_2,&local_168,3,&local_b8);
LAB_140320eb0:
  local_d8 = 0xd;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_178 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_170 = uRam00000001419df7a8;
  uStack_16c = uRam00000001419df7ac;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_178);
  local_b8 = &local_138;
  plVar7 = (longlong *)
           gml_Script_InputDeviceGetAnyGamepadConnected(param_1,param_2,&local_168,1,&local_b8);
  if (plVar7 != &local_80) {
    local_178 = *plVar7;
    uStack_170 = (undefined4)plVar7[1];
    uStack_16c = *(undefined4 *)((longlong)plVar7 + 0xc);
    FUN_140041b80(&local_80,&local_178);
    local_res20 = uStack_74;
    lVar10 = local_80;
  }
  local_d8 = 0xe;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_158 = 0.0;
  iVar3 = 0;
  if ((local_res20 == 2) && (lVar10 != 0)) {
    iVar3 = *(int *)(lVar10 + 0x24);
  }
  if (0 < iVar3) {
    do {
      iVar3 = iVar3 + -1;
      local_d8 = 0x11;
      iVar5 = FUN_140e4a740(&local_158);
      plVar7 = (longlong *)0x0;
      if (((local_res20 & 0xffffff) == 2) && (lVar10 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar10 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar10 + 0x24));
        }
        else {
          plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar10 + 8));
        }
        if (plVar7 != &local_c8) goto LAB_140321033;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar7 = &local_80;
LAB_140321033:
        local_178 = *plVar7;
        uStack_170 = (undefined4)plVar7[1];
        uStack_16c = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_178);
      }
      local_d8 = 0x12;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      local_b8 = &local_c8;
      uVar6 = gml_Script_InputDeviceIsConnected(param_1,param_2,&local_168,1,&local_b8);
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 != '\0') {
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        local_b0 = &local_c8;
        if ((int)local_70[0] < 1) {
          plVar7 = &DAT_1419df7b0;
LAB_14032112c:
          local_178 = *plVar7;
          uStack_170 = (undefined4)plVar7[1];
          uStack_16c = *(undefined4 *)((longlong)plVar7 + 0xc);
          if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_178);
        }
        else {
          plVar7 = (longlong *)*local_68;
          if (plVar7 != local_118) goto LAB_14032112c;
        }
        local_a8 = local_118;
        if ((int)local_70[0] < 2) {
          plVar7 = &DAT_1419df7b0;
LAB_140321180:
          local_178 = *plVar7;
          uStack_170 = (undefined4)plVar7[1];
          uStack_16c = *(undefined4 *)((longlong)plVar7 + 0xc);
          if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_178);
        }
        else {
          plVar7 = (longlong *)local_68[1];
          if (plVar7 != local_108) goto LAB_140321180;
        }
        local_a0 = local_108;
        uVar6 = gml_Script_InputDeviceEnumerate(param_1,param_2,&local_148,3,&local_b0);
        cVar2 = FUN_140e491e0(uVar6);
        if (cVar2 != '\0') {
          local_d8 = 0x15;
          if (&local_c8 != param_3) {
            local_178 = local_c8;
            uStack_170 = uStack_c0;
            uStack_16c = uStack_bc;
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            FUN_140041b80(param_3,&local_178);
          }
          goto LAB_14032128d;
        }
      }
      local_d8 = 0x18;
      uVar4 = local_14c & 0xffffff;
      if (uVar4 == 0) {
LAB_140321243:
        local_158 = local_158 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_158 = (double)FUN_140e4b060(&local_158);
          local_14c = 0;
          goto LAB_140321243;
        }
        if (uVar4 == 7) {
          local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_158 = (double)((longlong)local_158 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_14c = 0;
            goto LAB_140321243;
          }
          FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
        }
      }
    } while (0 < iVar3);
  }
  local_d8 = 0x1b;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = (longlong)&DAT_bff0000000000000;
LAB_14032128d:
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,5,FUN_140041b30);
  if (0 < (int)local_70[0]) {
    puVar8 = local_68;
    do {
      puVar1 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_68);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

