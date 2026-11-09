// gml_Script_anon_98_gml_Object_oTempParticle_Create_0 @ 0x140daf0b0

void gml_Script_anon_98_gml_Object_oTempParticle_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  longlong local_50;
  
  local_res18 = 0;
  local_70 = "gml_Object_oTempHealthHalf_Alarm_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 1;
  uStack_ac = 0xf;
  local_b8 = 0x10000000000009d;
  local_res8 = param_1;
  local_res10 = param_2;
  iVar2 = FUN_140e63cb0(local_60,&local_res8,&local_res10,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (0 < iVar2) {
    do {
      local_68 = 3;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      local_9c = 10;
      local_a8 = 0;
      iVar2 = FUN_140e851f0(uVar3,&local_a8,DAT_141955260,0);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if (iVar2 == 0) {
        local_68 = 4;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5a58);
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
        FUN_140e609c0(local_res8);
        uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
        uStack_b0 = *(undefined4 *)(puVar4 + 1);
        if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
          local_b8 = *puVar4;
        }
        else {
          FUN_1400419b0(&local_b8,puVar4);
        }
        local_res18 = 1;
        local_8c = 0;
        local_98 = 0x3fe8000000000000;
        FUN_140042560(&local_b8,&local_98);
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        if (&local_b8 != puVar5) {
          local_88 = (undefined4)local_b8;
          uStack_84 = local_b8._4_4_;
          uStack_80 = uStack_b0;
          uStack_7c = uStack_ac;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_88);
        }
        local_res18 = 0;
        if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140e60910(1);
      }
      cVar1 = FUN_140e643f0(local_60,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_60,&local_res8,&local_res10);
  local_68 = 7;
  FUN_140edd0e0(local_res8,local_res10,0,0);
  if (local_50 != 0) {
    FUN_140e4cd60();
  }
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

