// gml_Object_oClotMound_Step_0 @ 0x1408b1b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oClotMound_Step_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulonglong uVar8;
  longlong local_248;
  longlong lStack_240;
  double local_238;
  uint local_22c;
  longlong local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  longlong local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  longlong local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  local_1d0 = "gml_Object_oClotMound_Draw_0";
  local_1c8 = 0;
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_148,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_21c = 0xffffff;
  local_228 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1c8 = 2;
  local_22c = 0;
  local_238 = 0.0;
  bVar2 = true;
  uVar6 = 0xffffff;
  do {
    iVar4 = 0;
    if (!bVar2) {
      local_1c8 = 2;
      uVar3 = local_22c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_238 = (double)CONCAT44(local_238._4_4_,local_238._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_238 = (double)((longlong)local_238 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_22c = 0;
              goto LAB_1408b1c6e;
            }
            FUN_140042910(&DAT_14172c3d8,&local_238,&local_238);
          }
          goto LAB_1408b1c78;
        }
        local_238 = (double)FUN_140e4b060(&local_238);
        local_22c = 0;
      }
LAB_1408b1c6e:
      local_238 = local_238 + 1.0;
    }
LAB_1408b1c78:
    bVar2 = false;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a56f30);
    if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
      iVar4 = *(int *)(*plVar5 + 0x24);
    }
    local_16c = 0;
    local_178 = (double)iVar4;
    iVar4 = FUN_140e851f0(&local_238,&local_178,DAT_141955260,1);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      _eh_vector_destructor_iterator_(local_148,0x10,9,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_1d8;
      return;
    }
    local_1c8 = 4;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a56f30);
    iVar4 = FUN_140e4a740(&local_238);
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar5 != &local_228) {
      local_248 = *plVar5;
      lStack_240 = plVar5[1];
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_248);
    }
    local_1c8 = 5;
    pcVar7 = (code *)((ulonglong)pcVar7 & 0xffffffffffffff00);
    FUN_140e87440(&local_228,DAT_1419fe5c8,0x80000000,&local_1e8,pcVar7,0);
    local_15c = 0;
    local_168 = 0;
    iVar4 = FUN_140e851f0(&local_1e8,&local_168,DAT_141955260,1);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (iVar4 == -2 || 0 < iVar4) {
      local_1c8 = 7;
      if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_228,DAT_1419f5a08,0x80000000,&local_188,uVar8,0);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_228,DAT_141a56ea0,0x80000000,&local_198,uVar8,0);
      local_14c = 6;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_158 = param_1;
      FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_208,uVar8,0);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_228,DAT_1419fe5c8,0x80000000,&local_1e8,uVar8,0);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_228,DAT_141a578d0,0x80000000,&local_1a8,uVar8,0);
      FUN_140e87440(&local_228,DAT_141a0a7f8,0x80000000,&local_1b8,uVar8 & 0xffffffffffffff00,0);
      uStack_ac = 0xf;
      local_b8 = 0x1000001000000c4;
      lStack_240 = CONCAT44(0xf,uStack_b0);
      local_248 = 0x1000001000000c4;
      if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_248);
      local_a8 = local_148;
      lStack_240 = CONCAT44(uStack_17c,uStack_180);
      local_248 = local_188;
      if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_248);
      local_a0 = local_138;
      lStack_240 = CONCAT44(uStack_18c,uStack_190);
      local_248 = local_198;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_248);
      local_98 = local_128;
      uStack_1ec = local_1fc;
      uStack_1f0 = local_200;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
        local_1f8 = local_208;
      }
      else {
        FUN_1400419b0(&local_1f8,&local_208);
      }
      FUN_1400462a0(&local_1f8,&local_1e8);
      lStack_240 = CONCAT44(uStack_1ec,uStack_1f0);
      local_248 = local_1f8;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_248);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_90 = local_118;
      lStack_240 = CONCAT44(uStack_19c,uStack_1a0);
      local_248 = local_1a8;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_248);
      local_88 = local_108;
      local_248 = _DAT_1419e9700;
      lStack_240 = lRam00000001419e9708;
      if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_248);
      local_80 = local_f8;
      lStack_240 = CONCAT44(uStack_1ac,uStack_1b0);
      local_248 = local_1b8;
      if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_248);
      local_78 = local_e8;
      local_248 = _DAT_1419e9710;
      lStack_240 = uRam00000001419e9718;
      if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_248);
      local_70 = local_d8;
      local_248 = _DAT_1419e9700;
      lStack_240 = lRam00000001419e9708;
      if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_248);
      local_68 = local_c8;
      pcVar7 = (code *)&local_a8;
      FUN_1403ae470(param_1,param_2,&local_218,9,pcVar7);
      uVar6 = local_20c;
    }
    else {
      local_1c8 = 5;
    }
  } while( true );
}

