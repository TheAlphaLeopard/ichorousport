// gml_Script____struct___694_anon_8507_gml_Object_oPlayer_Other_10 @ 0x140c6d600

undefined8 *
gml_Script____struct___694_anon_8507_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@8168@gml_Object_oPlayer_Other_10";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x15e;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ef998);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef998);
  cVar1 = FUN_140e491e0(puVar2);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar3);
  }
  *(undefined4 *)((longlong)plVar3 + 0xc) = 0xd;
  if (cVar1 == '\0') {
    uVar4 = 0x3ff00000;
  }
  else {
    uVar4 = 0;
  }
  *plVar3 = (ulonglong)uVar4 << 0x20;
  local_18 = 0x160;
  if (puVar2 != param_3) {
    local_38 = *(undefined4 *)puVar2;
    uStack_34 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_30 = *(undefined4 *)(puVar2 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

