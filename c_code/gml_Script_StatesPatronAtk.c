// gml_Script_StatesPatronAtk @ 0x140562660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesPatronAtk
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  bool bVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_130 = "gml_Script_StatesPatronIdle";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 1;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_16c = 0;
  local_178 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 3;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_6c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_70 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_78 = *param_5;
  }
  else {
    FUN_1400419b0(&local_78);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0034) &&
     (_Init_thread_header(&DAT_141de0034), DAT_141de0034 == -1)) {
    _DAT_141de00fc = 0;
    _DAT_141de00f0 = 0x4000000000000000;
    _DAT_141de0110 = 0;
    _DAT_141de0104 = 0;
    _DAT_141de0114 = 1;
    _DAT_141de0124 = 0;
    _DAT_141de0118 = 0x3ff0000000000000;
    _DAT_141de0128 = 2;
    _DAT_141de0138 = 0;
    _DAT_141de012c = 0x4008000000000000;
    _DAT_141de013c = 3;
    atexit((_func_5014 *)&LAB_1414823f0);
    _Init_thread_footer(&DAT_141de0034);
  }
  uVar7 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141de00f0 + (longlong)(int)uVar7 * 0x14,&local_78,DAT_141955260,0);
    uVar10 = (undefined4)((ulonglong)pcVar9 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141de0100 + (longlong)(int)uVar7 * 0x14);
      if (iVar3 == 0) {
        local_128 = 7;
        uStack_15c = 0xf;
        local_168 = 0x100000100000325;
        local_118 = 0x100000100000325;
        uStack_110 = uStack_160;
        uStack_10c = 0xf;
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_118);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_88);
        local_128 = 9;
      }
      else if (iVar3 == 1) {
        local_128 = 0xe;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
        local_168 = CONCAT44(uRam0000000141dc66f4,_DAT_141dc66f0);
        uStack_160 = uRam0000000141dc66f8;
        uStack_15c = uRam0000000141dc66fc;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_168);
        local_68 = local_e8;
        uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_140 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
          local_148 = *puVar5;
        }
        else {
          FUN_1400419b0(&local_148,puVar5);
        }
        FUN_140046500(&local_148,uVar4);
        uStack_10c = 0;
        local_118 = 0x3ff0000000000000;
        FUN_1400462a0(&local_118,&local_148);
        uVar4 = CONCAT44(uVar10,DAT_141a0a0d8);
        puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar4,&local_68);
        uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
        local_150 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
          local_158 = *puVar5;
        }
        else {
          FUN_1400419b0(&local_158,puVar5);
        }
        uStack_15c = 7;
        local_168 = CONCAT44(local_168._4_4_,6);
        FUN_140042560(&local_158,&local_168);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        uStack_9c = local_14c;
        uStack_a0 = local_150;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
          local_a8 = local_158;
        }
        else {
          FUN_1400419b0(&local_a8,&local_158);
        }
        FUN_140042560(&local_a8,&local_118);
        local_168 = local_a8;
        uStack_160 = uStack_a0;
        uStack_15c = uStack_9c;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_168);
        if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_128 = 0xf;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
        local_168 = CONCAT44(uRam0000000141dc66f4,_DAT_141dc66f0);
        uStack_160 = uRam0000000141dc66f8;
        uStack_15c = uRam0000000141dc66fc;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_168);
        local_68 = local_e8;
        puVar5 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_178,1,CONCAT44(uVar10,DAT_141a0a0d8),&local_68
                              );
        local_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
        local_150 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
          local_158 = *puVar5;
        }
        else {
          FUN_1400419b0(&local_158,puVar5);
        }
        uStack_15c = 7;
        local_168 = CONCAT44(local_168._4_4_,3);
        FUN_140042560(&local_158,&local_168);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        uStack_13c = local_14c;
        uStack_140 = local_150;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
          local_148 = local_158;
        }
        else {
          FUN_1400419b0(&local_148,&local_158);
        }
        FUN_1400462a0(&local_148,&local_98);
        uVar7 = FUN_140e851f0(uVar4,&local_148,DAT_141955260,1);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if (uVar7 < 0x80000000) {
          local_128 = 0x11;
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          local_f8 = 0;
          local_f0 = 0;
          local_ec = 5;
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          local_108 = 0;
          local_100 = 0;
          local_fc = 5;
          local_168 = CONCAT44(uRam00000001419e6444,_DAT_1419e6440);
          uStack_160 = uRam00000001419e6448;
          uStack_15c = uRam00000001419e644c;
          if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_168);
          local_60 = local_d8;
          uVar4 = gml_Script_choose_weighted(param_1,param_2,&local_108,1,&local_60);
          cVar2 = FUN_140e491e0(uVar4);
          bVar8 = cVar2 == '\0';
          if (bVar8) {
            uStack_15c = 10;
            local_168 = 3;
            puVar5 = &local_168;
          }
          else {
            uStack_10c = 10;
            local_118 = 9;
            puVar5 = &local_118;
          }
          uVar1 = uStack_10c;
          uVar10 = uStack_15c;
          local_148 = *puVar5;
          uStack_140 = *(undefined4 *)(puVar5 + 1);
          uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_148);
          if ((bVar8) && ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_168);
          }
          if ((!bVar8) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_118);
          }
          local_58 = local_c8;
          local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_160 = DAT_1419df7b8;
          uStack_15c = DAT_1419df7bc;
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_168);
          local_50 = local_b8;
          gml_Script_truestate_begin_step(param_1,param_2,&local_f8,2,&local_58);
        }
        local_128 = 0x15;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
        FUN_140e63610(param_1,param_2,&local_178,0,uVar4,0);
        local_128 = 0x16;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
        FUN_140e63610(param_1,param_2,&local_178,0,uVar6,0);
        local_128 = 0x17;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
        FUN_140e63610(param_1,param_2,&local_178,0,uVar6,0);
        local_128 = 0x18;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        FUN_140e63610(param_1,param_2,&local_178,0,uVar4,0);
        local_128 = 0x19;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
        local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_160 = DAT_1419df7b8;
        uStack_15c = DAT_1419df7bc;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_168);
        local_68 = local_e8;
        local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_160 = DAT_1419df7b8;
        uStack_15c = DAT_1419df7bc;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_168);
        local_60 = local_d8;
        local_168 = CONCAT44(uRam00000001419e6464,_DAT_1419e6460);
        uStack_160 = uRam00000001419e6468;
        uStack_15c = uRam00000001419e646c;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_168);
        local_58 = local_c8;
        FUN_140e63610(param_1,param_2,&local_178,3,uVar4,&local_68);
        local_128 = 0x1b;
      }
      else if (iVar3 == 2) {
        local_128 = 0x1f;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_178,0,uVar4,0);
        local_128 = 0x20;
      }
      else if (iVar3 == 3) {
        local_128 = 0x24;
      }
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

