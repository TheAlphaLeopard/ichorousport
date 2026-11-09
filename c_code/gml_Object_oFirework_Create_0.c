// gml_Object_oFirework_Create_0 @ 0x140ad2dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFirework_Create_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_a0 = "gml_Object_oFilthyGlare_Step_0";
  local_98 = 0;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_2c = 0xffffff;
  local_38 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_98 = 3;
  uStack_dc = 0xf;
  local_e8 = 0x1000000000000ee;
  local_108 = 0xee;
  uStack_104 = 0x1000000;
  uStack_100 = uStack_e0;
  uStack_fc = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_108);
  local_60 = &local_d8;
  uVar9 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar9,&local_60);
  uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar2 = FUN_140e491e0(uVar3);
  if (cVar2 == '\0') {
    local_98 = 3;
  }
  else {
    local_98 = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2b98);
    cVar2 = FUN_140e491e0(uVar3);
    if (cVar2 == '\0') {
      local_98 = 0xe;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
      if (puVar4 != &local_d8) {
        local_108 = *(undefined4 *)puVar4;
        uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_100 = *(undefined4 *)(puVar4 + 1);
        uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_108);
      }
      local_60 = &local_d8;
      uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar8,DAT_141a02ef8),&local_60);
      cVar2 = FUN_140e491e0(uVar3);
      if (cVar2 == '\0') {
        local_98 = 0xf;
        if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_90);
        }
        local_90 = 0;
        local_88 = 0;
        local_84 = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2ba8);
        FUN_140e63610(param_1,param_2,&local_90,0,uVar3,0);
        local_98 = 0x10;
      }
      else {
        local_98 = 0x13;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_f8 = 0;
        local_f0 = 0;
        local_ec = 5;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe698);
        puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2bb8);
        puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419efca8);
        puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe698);
        if (puVar4 != &local_d8) {
          local_108 = *(undefined4 *)puVar4;
          uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_100 = *(undefined4 *)(puVar4 + 1);
          uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          FUN_140041b80(&local_d8,&local_108);
        }
        local_60 = &local_d8;
        if (puVar5 != local_c8) {
          local_108 = *puVar5;
          uStack_104 = puVar5[1];
          uStack_100 = puVar5[2];
          uStack_fc = puVar5[3];
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_108);
        }
        local_58 = local_c8;
        if (puVar6 != local_b8) {
          local_108 = *puVar6;
          uStack_104 = puVar6[1];
          uStack_100 = puVar6[2];
          uStack_fc = puVar6[3];
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_108);
        }
        local_50 = local_b8;
        FUN_140e609c0(param_1);
        puVar5 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_f8,3,&local_60);
        if (puVar5 != puVar7) {
          local_108 = *puVar5;
          uStack_104 = puVar5[1];
          uStack_100 = puVar5[2];
          uStack_fc = puVar5[3];
          if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_108);
        }
        FUN_140e60910(1);
        local_98 = 0x15;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
        FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_38,param_1,param_2);
        local_108 = (undefined4)local_38;
        uStack_104 = local_38._4_4_;
        uStack_100 = uStack_30;
        uStack_fc = uStack_2c;
        if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_70);
        }
        FUN_140041b80(&local_70,&local_108);
        FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_70);
        local_98 = 0x16;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
        FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_48,param_1,param_2);
        local_108 = (undefined4)local_48;
        uStack_104 = local_48._4_4_;
        uStack_100 = uStack_40;
        uStack_fc = uStack_3c;
        if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_80);
        }
        FUN_140041b80(&local_80,&local_108);
        FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_80);
      }
    }
    else {
      local_98 = 6;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe698);
      puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2bb8);
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe698);
      if (puVar4 != &local_d8) {
        local_108 = *(undefined4 *)puVar4;
        uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_100 = *(undefined4 *)(puVar4 + 1);
        uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_108);
      }
      local_60 = &local_d8;
      if (puVar5 != local_c8) {
        local_108 = *puVar5;
        uStack_104 = puVar5[1];
        uStack_100 = puVar5[2];
        uStack_fc = puVar5[3];
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_108);
      }
      local_58 = local_c8;
      local_108 = _DAT_1419eb510;
      uStack_104 = uRam00000001419eb514;
      uStack_100 = uRam00000001419eb518;
      uStack_fc = uRam00000001419eb51c;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_108);
      local_50 = local_b8;
      FUN_140e609c0(param_1);
      puVar5 = (undefined4 *)
               FUN_140e634e0(param_1,param_2,&local_f8,3,CONCAT44(uVar8,DAT_141a00c58),&local_60);
      if (puVar5 != puVar6) {
        local_108 = *puVar5;
        uStack_104 = puVar5[1];
        uStack_100 = puVar5[2];
        uStack_fc = puVar5[3];
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_108);
      }
      FUN_140e60910(1);
      local_98 = 7;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a58be0);
      uStack_dc = *(uint *)((longlong)puVar4 + 0xc);
      uStack_e0 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
        local_e8 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_e8,puVar4);
      }
      FUN_1400462a0(&local_e8,uVar3);
      if ((uStack_dc & 0xffffff) == 0) {
        uVar8 = (undefined4)local_e8;
      }
      else {
        uVar8 = FUN_140e4b060(&local_e8);
      }
      dVar1 = (double)FUN_140e78d00(uVar8);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if (dVar1 < 1.0) {
        local_98 = 8;
        (**(code **)(*param_1 + 8))(param_1,DAT_1419fe698);
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2b98);
        uStack_dc = 0xd;
        local_e8 = 0;
        if (&local_e8 != puVar4) {
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = uStack_e0;
          uStack_fc = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_108);
        }
        local_98 = 9;
        puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2b88);
        puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2bb8);
        FUN_140e609c0(param_1);
        if (puVar5 != puVar6) {
          local_108 = *puVar5;
          uStack_104 = puVar5[1];
          uStack_100 = puVar5[2];
          uStack_fc = puVar5[3];
          if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_108);
        }
        FUN_140e60910(1);
      }
      local_98 = 0xb;
    }
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return;
}

