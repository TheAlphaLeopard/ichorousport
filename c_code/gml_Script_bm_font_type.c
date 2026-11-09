// gml_Script_bm_font_type @ 0x14025a5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_bm_font_type
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  uint local_18c;
  double local_188;
  uint local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  double *local_98;
  double *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  
  local_b0 = "gml_Script_draw_text_outline";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 10;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_148,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0xc;
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 6) {
    puVar5 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
  }
  else {
    puVar5 = (undefined8 *)param_5[5];
    puVar6 = (undefined8 *)*param_5;
  }
  uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_160 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_168);
  }
  FUN_1400462a0(&local_168,puVar5);
  local_158 = local_168;
  uStack_150 = uStack_160;
  uStack_14c = uStack_15c;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_158);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  bVar2 = true;
LAB_14025a750:
  if (!bVar2) {
    local_a8 = 0xc;
    uVar3 = local_17c & 0xffffff;
    if (uVar3 != 0) {
      if (uVar3 != 1) {
        if (uVar3 == 7) {
          local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
        }
        else if (uVar3 == 10) {
          local_188 = (double)((longlong)local_188 + 1);
        }
        else {
          if (uVar3 == 0xd) {
            local_17c = 0;
            goto LAB_14025a79d;
          }
          FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
        }
        goto LAB_14025a7a7;
      }
      local_188 = (double)FUN_140e4b060(&local_188);
      local_17c = 0;
    }
LAB_14025a79d:
    local_188 = local_188 + 1.0;
  }
LAB_14025a7a7:
  bVar2 = false;
  if (param_4 < 6) {
    puVar5 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
  }
  else {
    puVar5 = (undefined8 *)param_5[5];
    puVar6 = (undefined8 *)*param_5;
  }
  uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_160 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_168);
  }
  FUN_1400460e0(&local_168,puVar5);
  iVar4 = FUN_140e851f0(&local_188,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uVar9 = (undefined4)((ulonglong)pcVar8 >> 0x20);
  if (iVar4 != -2 && iVar4 < 1) {
    local_a8 = 0xd;
    if (param_4 < 6) {
      puVar5 = &DAT_1419df7b0;
      if (param_4 < 2) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)param_5[1];
      }
    }
    else {
      puVar5 = (undefined8 *)param_5[5];
      puVar6 = (undefined8 *)param_5[1];
    }
    uStack_bc = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_c0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
      local_c8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_c8);
    }
    FUN_1400462a0(&local_c8,puVar5);
    local_1a8 = (undefined4)local_c8;
    uStack_1a4 = local_c8._4_4_;
    uStack_1a0 = uStack_c0;
    uStack_19c = uStack_bc;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1a8);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    bVar1 = true;
    do {
      if (!bVar1) {
        local_a8 = 0xd;
        uVar3 = local_18c & 0xffffff;
        if (uVar3 != 0) {
          if (uVar3 != 1) {
            if (uVar3 == 7) {
              local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
            }
            else if (uVar3 == 10) {
              local_198 = (double)((longlong)local_198 + 1);
            }
            else {
              if (uVar3 == 0xd) {
                local_18c = 0;
                goto LAB_14025a986;
              }
              FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
            }
            goto LAB_14025a990;
          }
          local_198 = (double)FUN_140e4b060(&local_198);
          local_18c = 0;
        }
LAB_14025a986:
        local_198 = local_198 + 1.0;
      }
LAB_14025a990:
      bVar1 = false;
      if (param_4 < 6) {
        puVar5 = &DAT_1419df7b0;
        if (param_4 < 2) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)param_5[1];
        }
      }
      else {
        puVar5 = (undefined8 *)param_5[5];
        puVar6 = (undefined8 *)param_5[1];
      }
      uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
        local_158 = *puVar6;
      }
      else {
        FUN_1400419b0(&local_158);
      }
      FUN_1400460e0(&local_158,puVar5);
      iVar4 = FUN_140e851f0(&local_198,&local_158,DAT_141955260,1);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      uVar9 = (undefined4)((ulonglong)pcVar8 >> 0x20);
      if (iVar4 == -2 || 0 < iVar4) goto LAB_14025a750;
      local_a8 = 0xe;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      local_98 = &local_188;
      local_90 = &local_198;
      if (param_4 < 3) {
        puVar5 = &DAT_1419df7b0;
LAB_14025aac0:
        local_1a8 = *(undefined4 *)puVar5;
        uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_1a0 = *(undefined4 *)(puVar5 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_1a8);
      }
      else {
        puVar5 = (undefined8 *)param_5[2];
        if (puVar5 != &local_128) goto LAB_14025aac0;
      }
      local_88 = &local_128;
      if (param_4 < 5) {
        puVar5 = &DAT_1419df7b0;
LAB_14025ab0e:
        local_1a8 = *(undefined4 *)puVar5;
        uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_1a0 = *(undefined4 *)(puVar5 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_1a8);
      }
      else {
        puVar5 = (undefined8 *)param_5[4];
        if (puVar5 != &local_118) goto LAB_14025ab0e;
      }
      local_80 = &local_118;
      if (param_4 < 5) {
        puVar5 = &DAT_1419df7b0;
LAB_14025ab5c:
        local_1a8 = *(undefined4 *)puVar5;
        uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_1a0 = *(undefined4 *)(puVar5 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)_local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_1a8);
      }
      else {
        puVar5 = (undefined8 *)param_5[4];
        if (puVar5 != &local_108) goto LAB_14025ab5c;
      }
      local_78 = &local_108;
      if (param_4 < 5) {
        puVar5 = &DAT_1419df7b0;
LAB_14025abaa:
        local_1a8 = *(undefined4 *)puVar5;
        uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_1a0 = *(undefined4 *)(puVar5 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_1a8);
      }
      else {
        puVar5 = (undefined8 *)param_5[4];
        if (puVar5 != &local_f8) goto LAB_14025abaa;
      }
      local_70 = &local_f8;
      if (param_4 < 5) {
        puVar5 = &DAT_1419df7b0;
LAB_14025abf8:
        local_1a8 = *(undefined4 *)puVar5;
        uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_1a0 = *(undefined4 *)(puVar5 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)_local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_1a8);
      }
      else {
        puVar5 = (undefined8 *)param_5[4];
        if (puVar5 != &local_e8) goto LAB_14025abf8;
      }
      local_1a8 = _DAT_1419e38b0;
      uStack_1a4 = uRam00000001419e38b4;
      uStack_1a0 = uRam00000001419e38b8;
      uStack_19c = uRam00000001419e38bc;
      local_68 = &local_e8;
      if ((1 << ((byte)_local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1a8);
      local_60 = local_d8;
      pcVar8 = (code *)CONCAT44(uVar9,DAT_141a04818);
      FUN_140e634e0(param_1,param_2,&local_178,8,pcVar8,&local_98);
    } while( true );
  }
  local_a8 = 0x11;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14025acfd:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if ((double *)puVar5 != &local_148) goto LAB_14025acfd;
  }
  local_98 = &local_148;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_14025ad4a:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 != &local_138) goto LAB_14025ad4a;
  }
  local_90 = (double *)&local_138;
  if (param_4 < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_14025ad97:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
    if (puVar5 != &local_128) goto LAB_14025ad97;
  }
  local_88 = &local_128;
  if (param_4 < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_14025ade4:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)param_5[3];
    if (puVar5 != &local_118) goto LAB_14025ade4;
  }
  local_80 = &local_118;
  if (param_4 < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_14025ae31:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)param_5[3];
    if (puVar5 != &local_108) goto LAB_14025ae31;
  }
  local_78 = &local_108;
  if (param_4 < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[3];
    if (puVar5 == &local_f8) goto LAB_14025aeac;
  }
  local_1a8 = *(undefined4 *)puVar5;
  uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_1a0 = *(undefined4 *)(puVar5 + 1);
  uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_1a8);
LAB_14025aeac:
  local_70 = &local_f8;
  if ((param_4 < 4) || (puVar7 = (undefined8 *)param_5[3], puVar7 != &local_e8)) {
    local_1a8 = *(undefined4 *)puVar7;
    uStack_1a4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_1a0 = *(undefined4 *)(puVar7 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1a8);
  }
  local_1a8 = _DAT_1419e38b0;
  uStack_1a4 = uRam00000001419e38b4;
  uStack_1a0 = uRam00000001419e38b8;
  uStack_19c = uRam00000001419e38bc;
  local_68 = &local_e8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1a8);
  local_60 = local_d8;
  FUN_140e634e0(param_1,param_2,&local_178,8,CONCAT44(uVar9,DAT_141a04818),&local_98);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

